#include<stdio.h>
int main()
{
    int n,p=0,j;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                p++;
            }
        }
        if(p>n/2)
        {
            printf("%d",a[i]);
            break;
        }
    }

}