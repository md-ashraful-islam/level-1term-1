#include<stdio.h>

void copystr(char *p1,char *p2)
{
    while(*p2)
        *p1++=*p2++;
    *p1='\0';
}
//find position and delete substring
void fpanddsstr(char *p1,char *s,char *p3)
{
    char *ch,str[100],*p2,*ch2,*ch3;
    ch2=p3;
    p2=str;
    ch=s;
    copystr(p2,p1);
    while(*p2)
    {
        ch3=p2;
        if(*p2==*s)
        {
            while(*s)
            {
                if(*p2!=*s)
                    break;
                p2++;
                s++;
            }
            if(!(*s))
            {
                while(*p3)
                {
                    *p1=*p3;
                    p1++;
                    p3++;
                }
                p3=ch2;
                s=ch;
            }
            else
            {
                s=ch;
                p2=ch3;
            }
        }
        *p1=*p2;
        p2++;
        p1++;
    }
    *p1='\0';
}
int main()
{
    char str1[100],str2[50],str3[50];
    char *p1,*p2,*p3;
    int i;
    p1=str1;
    p2=str2;
    p3=str3;
    printf("Please enter your string:");
    gets(str1);
    printf("Please enter  substring:");
    gets(str2);
    printf("Please enter change of substring:");
    gets(str3);
    fpanddsstr(p1,p2,p3);
    printf("%s",str1);
    return 0;

}
