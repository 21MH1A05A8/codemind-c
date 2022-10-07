#include<stdio.h>
int main()
{
    int n,t,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            c++;
        }
        if (arr[i]>t)
        {
            c=c+2;
        }
    }
    printf("%d",c);
}