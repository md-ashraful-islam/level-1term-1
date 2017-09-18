#include<stdio.h>
int stringlen(char *p)
{
    int i=0;
    for(i=0;*p;*p++,i++);
    return i;
}
void reverse(char *p,char *q)
{
    int i,l=stringlen(p);
    p=p+l-1;
    for(i=0;i<l;i++)
        *q++=*p--;
    *q='\0';
}
int main()
{
    char str[100],str1[100],*p1,*p2;
    p1=str;
    p2=str1;
    printf("Please enter your string: ");
    gets(str);
//    printf("%d\n",stringlen(p1));
    reverse(p1,p2);
    printf("The reverse string is: %s",str1);
    return 0;
}
