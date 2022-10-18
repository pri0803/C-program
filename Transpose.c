#incude<stdio.h>
int main()
{
    int i,j,b[3][3];
    int a[3][3]={{1,2,3},{6,7,8},{11,12,13}};
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i!=j)
                b[i][j]=a[j][i];
            else
                b[i][j]=a[i][j];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
