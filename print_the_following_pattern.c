#include<stdio.h>
int main()
{
    int r,i,j,k;
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=r;k++)
        {
            if(i==1 || i==r || k==1 || k==r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}