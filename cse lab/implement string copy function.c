#include<stdio.h>
void stringcopy(char *p1,char *p2)
{
    while(*p2){
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
}
int main()
{
    char s1[100],s2[100];
    char *p1,*p2;
    p1=s1;
    p2=s2;
    printf("Please enter first string: ");
    gets(s1);
    printf("Please enter second string: ");
    gets(s2);
    stringcopy(p1,p2);
    printf("The copied string is %s",p1);
    return 0;
}
