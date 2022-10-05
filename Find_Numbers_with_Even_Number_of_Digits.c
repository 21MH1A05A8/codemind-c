#include<stdio.h>
int call(int n)
{
    int r,c=0;
    while(n)
    {
        r=n%10;
        c+=1;
        n=n/10;
    }
    return c;
}
int main()
{
    int n,s,c=0;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=call(arr[i]);
        if(s%2==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
}