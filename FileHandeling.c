#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[30], b[30];
    int i=0,k;
    FILE *fp, *fc;
    fp = fopen("item.txt","r");
    fc = fopen("square.txt","w");
    k = fgetc(fp);
    printf("%d \n",k);
    if(fp==NULL)
    {
        printf("Can't open file");
        exit(0);
    }
    while(!feof(fp))
    {
        a[i] = k;
        b[i] = a[i]*a[i];
        printf("%d \n",a[i]);
        k = fgetc(fp);
        i++;
    }
    for(i=0;i<10;i++)
     {
         fputc(b[i],fp);
     }

    fclose(fp);
    fclose(fc);
    return 0;
}
