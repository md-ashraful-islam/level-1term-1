#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,l,k=0,t,m;
    scanf("%d",&t);
    char str[t][200];
    gets(str[0]);
    for(i=0;i<t;i++)
    {
        gets(str[i]);
    }
    for(m=0;m<t;m++)
    {
        l=strlen(str[m]);
        char word[10][100];
        for(i=0,j=1;i<l;i++,k++)
        {
            if(str[m][i]==' ')
            {
                word[j][k]='\0';
                k=-1;
                j++;
            }
            else if(i==l-1)
            {
                word[j][k]=str[m][i];
                word[j][k+1]='\0';

            }
            else
                word[j][k]=str[m][i];
        }
        printf("the number of total word is %d\n",j);
        for(i=1;i<=j;i++)
        {
            printf("%s\n",word[i]);
        }
        j=1;
    }
    return 0;
}
