#include<stdio.h>

int isSubstring(char *s,char *t)
{
    int j=0,i=0,length=0;
    while(*t)
    {
        while(*(s+i))
        {
            if(*(s+i)==*(t))
            {
                j=0;
                while(*(t+j))
                {
                    if(*(t+j)!=*(s+i+j))
                    {
                        break;
                    }

                    j++;
                }
                if(length<j)
                {
                    length=j;
                }

            }
            i++;
        }
        t++;

    }
    return length;
}

int main()
{
    char s[200],t[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    printf("Enter a Substring: ");
    scanf(" %[^\n]",t);
    printf("%d",isSubstring(&s,&t));

        return 0;
}

