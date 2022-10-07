#include<stdio.h>
int main()
{
    int n,arr[100],i,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=0;j<n;j++)
        {
            if (i!=j)
            {
                k=k*arr[j];
            }
        }
        printf("%d ",k);
    }
}