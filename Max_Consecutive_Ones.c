#include<stdio.h>
int main()
{
    int n,i,c=0,m=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if (arr[i]==1)
        {
            c+=1;
        }
        else
        {
            c=0;
        }
        if (m<c)
        {
            m=c;
        }
    }
    printf("%d",m);
    
}