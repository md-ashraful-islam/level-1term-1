#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str1[]="bangldesh";
    char str2[]="bangladesh";
    printf("%s\n",str1);
    printf("%s\n",str2);
    i=strcmp(str1,str2);
    printf("%d",i);
    return 0;
}
