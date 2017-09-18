#include<stdio.h>

int main()
{
    char str[100],*p;
    //gets(p); it is not correct because gets function take an array of character
    //but pointer is not an actual array because it's size is not fixed.
    //for this reason it does not work.
//    p=(char *)malloc(sizeof(char)*50);
//    gets(p); this two is correct.
    printf("Enter a string: ");
    if(gets(str))
        printf("Your string is %s.",str);
    else
        printf("There is an error.");
    return 0;
}
