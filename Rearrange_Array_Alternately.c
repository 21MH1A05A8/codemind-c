#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        int n,e=0,d=1;
        scanf("%d",&n);
        int a[n],c[n*n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            c[e]=a[i];
            e+=2;
            if(e>n)
            break;
        }
        for(int i=0;i<n;i++)
        {
            c[d]=a[i];
            d+=2;
            if(d>n)
            break;
        }
        for(int i=0;i<n;i++)
        {
            if(i<n-1)
            printf("%d ",c[i]);
            else
            printf("%d",c[i]);
        }
            printf("
");
    }
    return 0;
}