#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter a float: ");
    scanf("%[1-9.]",str);

    printf("Your number is %s",str);

    return 0;
}
