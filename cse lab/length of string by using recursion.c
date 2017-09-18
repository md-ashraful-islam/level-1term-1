#include<stdio.h>
#include<string.h>
int lenstr(char str[])
{
    static int i=0;
    if(str[i]=='\0')
        return 0;
    i++;
    return 1+lenstr(str);
}
int main()
{
    char str[100];
    printf("Enter your string : ");
    scanf("%[^\n]s",&str);
    printf("The length of the string is %d",lenstr(str));
    return 0;
}
