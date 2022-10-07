#include<stdio.h>
int main()
{
    int z=0,o=0,i;
    char s[20];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    if(z*2==o)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
}