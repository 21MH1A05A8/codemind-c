#include<stdio.h>
#include<stdlib.h>
int main()
{
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n,o,p,i; 
    scanf("%ld",&n);
    o=0;
    for(i=0;s[i]!=NULL;i++)
        {
        if(s[i]=='a')
            o++;
    }
    p=n%i;
    n=n/i;
    o=o*n;
    n=0;
    for(i=0;i<p;i++)
        if(s[i]=='a')
        n++;
        printf("%ld",o+n);
    return 0;
}