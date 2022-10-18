
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    for(int i = 0;i<n;i++)
    {
        printf("Enter %d value of array: \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i = 0;i<n;i++)
    printf("%d value of array: %d \n",i+1,ptr[i]);
    
    Array
    printf("Reallocating Array\n");
      
    printf("Enter size of new array");
    scanf("%d",&n);
    
    ptr = (int*)realloc(ptr,n*sizeof(int));
    for(int i = 0;i<n;i++)
    {
        printf("Enter %d value of array: \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i = 0;i<n;i++)
    printf("%d value of array: %d \n",i+1,ptr[i]);
    
    free(ptr);
}
