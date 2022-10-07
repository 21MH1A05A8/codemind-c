#include<stdio.h>
int main()
{
    char s[100];
    int l=0,u=0;
    scanf("%s",s);
    for (int i=0;s[i]!=NULL;i++)
    {
        if (s[i]=='L')
        {
            l++;
        }
        else if (s[i]=='R')
        {
            l--;
        }
        else if (s[i]=='U')
        {
            u++;
        }
        else
        {
            u--;
        }
    }
    if (l==0 and u==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}