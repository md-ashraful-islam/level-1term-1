#include<stdio.h>


int revstr(char *p1)
{
    char t;
    int i,l;
    for(i=0;*p1;*p1++,i++);
    l=i;
    p1=p1-i;
    for(i=0;i<l/2;i++)
    {
        t=*(p1+i);
        *(p1+i)=*(p1+l-1-i);
        *(p1+l-1-i)=t;
    }
    return l;
}

int main()
{
    char str1[100];
    char *p1;
    printf("Enter your 1st string: ");
    gets(str1);
    p1=str1;

    printf("%d length of Reverse string is: %s",revstr(p1),str1);
    return 0;
}
