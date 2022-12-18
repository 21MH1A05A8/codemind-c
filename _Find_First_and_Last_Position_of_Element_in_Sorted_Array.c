#include<stdio.h>
int main()
{
    int n,arr[100],i,j,m,c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            c+=1;
            printf("%d ",i);
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        k+=1;
        if(arr[i]==m)
        {
            printf("%d ",i);
            break;
        }
    }
    if(c==0)
    {
        printf("-1 ");
    }
     if(c==0)
    {
        printf("-1 ");
    }
}