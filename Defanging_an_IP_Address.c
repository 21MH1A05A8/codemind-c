#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],k;
    scanf("%[^
]s",s);
    int i=0;
    while(s[i]!=NULL)
    {
        if (s[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",s[i]);
        }
        i++;
    }
}
