#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,s=0,s1=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i%2==0)
            {
                s+=a[i][j];
            }
            else
            {
                s1+=a[i][j];
            }
        }
    }
printf("%d %d",s,s1);
}