#include<stdio.h>
int countsubstring(char *p1,char *p2)
{
    int count=0,b=p2;
    while(*p1)
    {
        if(*p1==*p2)
        {
            while(*p2)
            {
                if(*p1!=*p2)
                {
                    count--;
                    break;
                }
                p1++;
                p2++;
            }
            p2=b;
            count++;
        }
        p1++;
    }
    return count;
}
int main()
{
    char s1[1000],s2[100];
    printf("Please enter your string: ");
    gets(s1);
    printf("Please enter substring: ");
    gets(s2);
    printf("Number of substring is %d",countsubstring(s1,s2));
    return 0;
}
