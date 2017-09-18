#include<stdio.h>

int count(char s[],char c)
{
    if(s[0]=='\0')
        return 0;
    else if(s[0]==c)
        return 1+count(s+1,c);
    else
        return count(s+1,c);
}

int main()
{
    char str[10]="toronto";
    printf("%d",count(str,'o'));
    return 0;

}
