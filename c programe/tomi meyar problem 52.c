#include<stdio.h>
#include<string.h>
int compare(char ara[],char ara2[],int j);
int main()
{
    int i,j,k=0,p=1,t,c=0,l;
    char str[202],str1[22];
    scanf("%d",&t);
    gets(str);
    for(i=1;i<=t;i++)
    {
        gets(str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            if(str[j]==' ')
            {
                c=c+compare(str,str1,j);
                k=0;
            }
            else
            {
                str1[k]=str[j];
                k++;
            }
        }
        printf("%d\n",c);
        for(i=1;i<=c+1;i++)
        {
            p=p*i;
        }
        printf("%d",p);
        p=1;
    }

    return 0;
}
int compare(char ara[],char ara2[],int j)
{
    int i,k=j+1,m,l;
    char str[22];
    l=strlen(ara);
    for(i=1;i<11;i++)
    {
        for(m=0;k<l;k++)
        {
            if(ara[k]==' ' || ara[k]=='\0')
            {
                k++;
                break;
            }
            else
            {
                str[m]=ara[k];
            }
        }
        if(strcmp(str,ara2)==0)
            return 0;
    }
    return 1;
}
