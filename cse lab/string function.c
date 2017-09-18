#include<stdio.h>

char * strrstr (char *str1, char *str2)
{
    char *t=str2;
    char *p;
    p=&t;
    while(*str1)
    {
        if(*str1==*str2)
        {
            while(*str2)
            {
                if(*str2==*str1)
                {
                    str1++;
                    str2++;
                }
                else
                {
                    str1++;
                    str2=t;
                    break;
                }
            }
            if(!(*str2))
                p=str1-lengthstr(t);
            str2=t;
        }
        str1++;
    }
    if((p==&t))
        return NULL;
    else
        return p;
}

char * strstr (char *str1,char *str2)
{
    char *t=str2;
    while(*str1)
    {
        if(*str1==*str2)
        {
            while(*str2)
            {
                if(*str2==*str1)
                {
                    str1++;
                    str2++;
                }
                else
                {
                    str1++;
                    str2=t;
                    break;
                }
            }
            if(!(*str2))
                return str1-lengthstr(t);
        }
        str1++;
    }
    return NULL;
}

char * strchr (char *str, char ch)
{
    while(*str)
    {
        if(*str==ch)
            return str;
        str++;
    }
    return NULL;
}

int lwstr(char *p)
{
    int i=p;
    while(*p)
    {
        *p=*p|32;
        p++;
    }
    return i;
}

int upstr(char *p)
{
    int i=p;
    while(*p)
    {
        *p=(*p)&(~32);
        p++;
    }
    return i;
}

int compstr(char *p1,char *p2)
{
    while(1)
    {
        if(*p1>*p2)
            return 2;
        else if(*p1<*p2)
            return -2;
        else
            return 0;
        p1++;
        p2++;
    }
    return 0;
}

int copystr(char *p1,char *p2)
{
    int i;
    for(i=0;*p2;i++)
        *p1++=*p2++;
    *p1='\0';
    return i;
}

int catstr(char *p1,char *p2)
{
    int i;
    for(i=0;*p1;*p1++,i++);
    for(;*p2;i++)
        *p1++=*p2++;

    *p1='\0';
    return i;
}




int lengthstr(char *p)
{
    int i;
    for(i=0;*p;*p++,i++);
    return i;
}

int main()
{
    char str1[100],str2[100];
    char *p1,*p2,ch='b';
    printf("Enter your 1st string: ");
    gets(str1);
    printf("Enter your 2nd string: ");
    gets(str2);
    p1=str1;
    p2=str2;
//    if(strchr(p1,ch)==NULL)
//        printf("%c is not in this string.\n",ch);
//    else
//        printf("%c first occur in %p\n",strchr(p1,ch));
    printf("Address of first string is %p\n",str1);
    if(strstr(p1,p2)==NULL)
        printf("%s is not in the string.\n",str1);
    else
        printf("%s first occur in %p\n",str2,strstr(p1,p2));


    if(strrstr(p1,p2)==NULL)
        printf("%s is not in the string.\n",str1);
    else
        printf("%s last occur in %p\n",str2,strrstr(p1,p2));
//    printf("The lower case of the following string is : %s\n",lwstr(p1));
//    printf("The uper case of the following string is : %s\n",upstr(p2));
//    if(compstr(p1,p2)==0)
//        printf("The strings are equal.\n");
//    else if(compstr(p1,p2)>0)
//        printf("The 1st string is greater than other.\n");
//    else
//        printf("The 1st string is less than other.\n");
//    printf("The length of your 1st string is %d.\n",lengthstr(p1));
//    printf("The length of your 2nd string is %d.\n",lengthstr(p2));
//
//    printf("The length of copied string is %d.\n",copystr(p1,p2));
//    printf("The copied strig is %s\n",str1);
//
//    printf("The length of Concatenate string is %d.\n",catstr(p1,p2));
//    printf("The copied Concatenates is %s\n",str1);




    return 0;
}
