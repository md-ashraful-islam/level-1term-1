#include<stdio.h>

int longestSubstringlength(char *s,char *t)
{
    int j=0,i=0,count=0;

    while(*t)
    {
        i=0;
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
                if(count<j)
                {
                    count=j;
                }
            }
            i++;
        }
        t++;
    }
    return count;
}

int main()
{
    char s[200],t[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    printf("Enter a Substring: ");
    scanf(" %[^\n]",t);

    printf("\n%d",longestSubstringlength(&s,&t));

    return 0;
}

