#include<stdio.h>
int main()
{
    int n,i,k,j;
    scanf("%d%d",&n,&k);
    int arr[n],s=0,m=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=arr[j];
            if (s==k)
            {
                m++;
            }
        }
    }
    printf("%d",m);
}