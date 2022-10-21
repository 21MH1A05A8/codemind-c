#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n],b[n],k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            b[k]=a[i];
            k++;
        }
    }
    int max=0;
    if(k==0)
    {
        printf("-1");
    }
    else
    {
    for(i=0;i<k;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    printf("%d",max);
    }
}