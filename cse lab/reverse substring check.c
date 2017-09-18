#include<stdio.h>
#include<string.h>
void findindex(char *p1,char *p2)
{
    char *c;
    int i,l=strlen(p2),j=0;
    p2=p2+l-1;
    c=p2;
    for(i=0;*p1;i++,p1++)
    {
        if(*p1==*p2)
        {
            while(*p2)
            {
                p2--;
                p1++;
                if(*p2!=*p1)
                {
                    break;
                }

            }
            if((p2+l)==c)
            {
                printf("%d",i);
                j++;
                i=i+l;
                p2=c;
            }
            else{
                p1=p1-(c-p2);
                p2=c;
            }
        }
    }
}
int main()
{
    char str1[100],str2[200],*p1,*p2;
    p1=str1;
    p2=str2;
    printf("Enter your 1st string: ");
    gets(str1);
    printf("Enter sub string: ");
    gets(str2);
    findindex(p1,p2);
    return 0;
}
