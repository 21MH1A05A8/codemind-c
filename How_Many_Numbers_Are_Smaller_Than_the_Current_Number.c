#include<stdio.h>
int main()
{
    int n,s,c;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        c=0;
        for(j=0;j<n;j++)
        {
            if(s>arr[j])
            {
                c+=1;
            }
        }
        printf("%d ",c);
    }
}