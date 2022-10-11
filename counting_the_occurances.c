#include<stdio.h>
int main()
{
    char str[1000],ch;
    int x=0,i=0;
    scanf("%[^
]s",str);
    scanf("%s",&ch);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        {
            x++;
        }
    }
    if(x>0)
    {
        printf("%d",x);
    }
    if(x==0)
    printf("-1");
}