#include<stdio.h>
#include<stdlib.h>

int count(char s[],char c)
{
    static int i=-1;
    i++;
    if(s[i]=='\0')
        return 0;
    if(s[i]==c)
        return 1+count(s,c);
    return count(s,c);
}

int main()
{
    char s[100],c;
    printf("Enter a string: ");
    gets(s);
    printf("Enter searching character: ");
    scanf(" %c",&c);
    printf("\nCount : %d",count(s,c));
    return 0;
}
