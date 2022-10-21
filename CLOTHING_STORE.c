#include<stdio.h>
int main()
{
    int n,i,j,c=0,k=0,t=1000;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                if(i!=j)
                {
                    arr[j]=t;
                }
                t++;
                k++;
            }
        }
        c=c+(k/2);
    }
    printf("%d",c);
}