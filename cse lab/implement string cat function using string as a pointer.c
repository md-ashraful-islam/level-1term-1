#include<stdio.h>
void stringcat(char *p1,char *p2)//con-catanation(জোড়া দেয়া)
{
    while(*p1)
    {
        p1++;
    }
    while(*p2)
    {
        *p1=*p2;
        p2++;
        p1++;
    }
    *p1='\0';
}

int main()
{
    char str1[100],str2[50];
    printf("Please enter first string: ");
    gets(str1);
    printf("Please enter second string: ");
    gets(str2);
    stringcat(str1,str2);
    printf("The concatanated string is %s",str1);
    return 0;
}

