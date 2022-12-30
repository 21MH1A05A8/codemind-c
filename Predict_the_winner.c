#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n],e=0,o=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
       if(n/2<=i)
       {
           e=e+a[i];
       }
       else
       {
           o=o+a[i];
       }
    }
    int as;
    if(e>o)
     as=e-o;
    else
     as=o-e;
    if(as%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}