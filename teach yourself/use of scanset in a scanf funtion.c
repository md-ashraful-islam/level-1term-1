#include<stdio.h>

int main()
{
    char str1[100],str2[200];

    printf("Please enter another string: ");
    scanf("%[A-Za-z ]",str2);
//    it also take space
    printf("String is %s\n",str2);


    printf("Please enter a string: ");
    scanf(" %[A-Za-z]",str1);
//    %[A-Za-z] means scanf take only (A to Z) and (a to z ) character
//    and assign it in the string when it first find another charecter
//    it stops taking caracter
    printf("String is %s\n",str1);

    return 0;
}
