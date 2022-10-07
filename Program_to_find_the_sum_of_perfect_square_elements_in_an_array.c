#include<stdio.h>
#include<math.h>
int sqr(int(n))
{
    int s;
    s=int(sqrt(n));
    if (s*s==n)
    {
       return 1; 
    }
    else{
        return 0;
    }
}
int main()
{
    int n,i,s=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if (sqr(arr[i])==1)
        {
        s+=arr[i];
        }
    }
printf("%d",s);
}