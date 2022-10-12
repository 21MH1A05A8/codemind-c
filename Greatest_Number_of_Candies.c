#include<stdio.h>
int main()
{
    int n,arr[100],k,i,max,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        s=k+arr[i];
        if(s>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    return 0;
}