#include <stdio.h>
#include <conio.h>
int main()
{ 
    int choice;
    int x,y;
    
    printf("input two number\n");
    scanf("%d%d",&x,&y);
    printf("Enter your choice\n");
    printf("1---> Add\n");
    printf("2--->Sub\n");
    printf("3--->multiply\n");
    printf("4--->divide\n");
    printf("5--->remainder\n");
   
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("addition of two number is =%d",x+y);
        break ;
        case 2:printf("subtraction of two number 9s =%d",x-y);
        break ;
        case 3:printf("multiplication of two number is =%d",x*y);
        break ;
        case 4: printf("divide of two number is =%d",x/y);
        break ;
        case 5: printf("remainder of two number is =%d",x%y);
        break ;
        default: printf(" choice out of range");
    }
    
    return 0;
} 
