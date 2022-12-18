#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
	    k=(k*10)+arr[i];
    }
    int p=k+1,k1,k2=0,ar[100];
    while(p!=0)
    {
    	k1=p%10;
    	ar[k2]=k1;
    	k2++;
    	p=p/10;
	}
	for(i=k2-1;i>=0;i--)
	{
		printf("%d ",ar[i]);
	}
}