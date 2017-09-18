#include<stdio.h>
int main()
{
    char str[1000];
    printf("Enter your string: ");
    scanf("%[^\n]",str);
    int l=strlen(str);
    for(l--;l>=0;l--)
        str[l]=str[l]|32;
    printf("\nUPPER case of your whole string is %s\n",str);
    l=strlen(str);
    for(l--;l>=0;l--)
        str[l]=str[l]&95;
    printf("\nLOWER case of your whole string is %s\n",str);
    return 0;
}
