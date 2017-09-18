#include<stdio.h>

int strlen(const char *p)
{
    int count=0;
    for(;*p;count++,p++);
//in this case we can increase pointed position but
//we cannot change the value of pointed location.
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",str);

    printf("\nLength of %s is %d\n",str,strlen(str));
    return 0;
}
