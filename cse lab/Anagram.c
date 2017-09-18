#include<stdio.h>
int lengthstr(char *p)
{
    int i;
    for(i=0;*p;*p++,i++);
    return i;
}
int checkanagram(char *p1,char *p2)
{
    int i,l=lengthstr(p2);
    if(lengthstr(p1)!=l)
        return 0;
    while(*p1)
    {
        for(i=0;*p2;i++)
        {
            if(*p1==*p2)
            {
                *p2='0';
                break;
            }
            p2++;
        }
        if(i==l)
            return 0;
        p2=p2-i;
        p1++;
    }
    return 1;
}
int main()
{
    char str1[100],str2[100];
    char *p1,*p2;
    printf("Enter your 1st string: ");
    gets(str1);
    printf("Enter your 2nd string: ");
    gets(str2);
    p1=str1;
    p2=str2;
    if(checkanagram(p1,p2))
        printf("Anagram");
    else
        printf("Not Anagram");
    return 0;
}
