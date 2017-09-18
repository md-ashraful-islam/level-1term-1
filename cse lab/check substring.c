#include<stdio.h>

int isSubstring(char *s,char *t)
{
    int j=0,i=0;
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
            if(*(t+j)=='\0')
            {
                return 1;
            }

        }
        i++;
    }
    return 0;
}

int main()
{
    char s[200],t[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    printf("Enter a Substring: ");
    scanf(" %[^\n]",t);
    if(isSubstring(&s,&t))
    {
        printf("\nYes");
        return 0;
    }

    printf("\nNo");
        return 0;
}
