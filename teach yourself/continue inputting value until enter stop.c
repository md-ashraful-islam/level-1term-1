#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char *p="stop";
    do{
        printf("Enter your string: ");
        gets(str);
    }while(strcmp(str,p));
    return 0;
}
