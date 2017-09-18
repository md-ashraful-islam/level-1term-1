#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int seach(char *str,char ch)
{
    int count=0;
    while(*str)
    {
            if(*str==toupper(ch) || *str==tolower(ch))
            count++;
        str++;
    }

    return count;
}

int main()
{
    char str[10000],ch[2];
    register int i;
    int t,c;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        scanf("%s",ch);
        c=seach(str,ch[0]);
        if(c)
            printf("Occurrence of '%c' in '%s' = %d\n",ch[0],str,c);
        else
            printf("'%c' is not present\n",ch[0]);
    }

    return 0;
}
