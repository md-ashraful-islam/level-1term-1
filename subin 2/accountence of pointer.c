#include<stdio.h>
int main()
{
    char str[]="Bangladesh";
    //char *str="Bangladesh";
    //this two statement is same.
    //because we can use array or string as a pointer by using it's name.
    printf("%c, %c, %c, %c\n",*str,*(str+1),*(str+2),*(str+3));

    printf("%c, %c, %c, %c\n",*str,*str+1,*str+2,*str+3);
    return 0;
}
