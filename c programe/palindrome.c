#include<stdio.h>
#include<string.h>
int palindrome(char string[])
{
    int i;
    int l=strlen(string);
    for(i=0;i<l/2;i++)
    {
        if(string[i]!=string[l-i-1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int l;
    char string[100000];
    gets(string);
    if(palindrome(string))
        printf("this is palindrome");
    else
        printf("this is not palindrome");
    return 0;
}
