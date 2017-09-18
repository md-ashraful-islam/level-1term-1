#include<stdio.h>
#include<string.h>

int main()
{
    char *p[3]={"yes","no","Maybe.Rephrase the question"};
    char str[111];
    printf("Enter your questions: ");
    gets(str);
    printf(p[strlen(str)%3]);
    return 0;
}
