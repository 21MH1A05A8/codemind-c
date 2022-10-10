#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100];
        scanf("%s",s);
        int i=0,m=0;
        while(s[i]!=NULL)
        {
            if(s[i]>=48&&s[i]<=57)
            {
                m=1;
                break;
            }
            i++;
        }
        if(m==1)
        {
            printf("Yes
");
        }
        else
        printf("No
");
    }
}