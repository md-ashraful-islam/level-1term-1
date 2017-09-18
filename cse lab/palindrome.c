#include<stdio.h>
#include<string.h>
void copyarrangestr(char *p1,char *p2)
{
    while(*p1)
    {

        if (*p1 == ' ' || *p1=='\t')
        {
            p1++;
        }
        else
        {
            *p1=*p1|32;
            *p2=*p1;
            *p1++;
            *p2++;
        }

    }
    *p2='\0';
}
int checkpalin(char *p)
{
    int l=strlen(p),i;
    for(i=0;i<l/2;i++)
        if(*(p+i)!=*(p-i+l-1))
            return 0;
    return 1;
}
int main()
{
    char str[100],str2[100];
    char *p,*p2;
    p=str;
    p2=str2;
    printf("Enter your string: ");
    gets(str);
    copyarrangestr(p,p2);
    printf("\n%s\n",str2);
    if(checkpalin(p2))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
