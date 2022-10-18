
#include <stdio.h>
int main()
{
   int n,f,s;
   f=1;
   s=0;
   printf("Enter a number till which you want fact some");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           f*=j;
       }
       s+=f;
   }
   printf("Sum = %d",s);
    return 0;
