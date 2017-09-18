#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char str[250],substr[10][25];
int a[10],count;

void create_substring()
{
    register int i,j;
    int l=strlen(str);

    for(i=0,j=0;i<l;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
        if(str[i]==' ' || str[i]=='.' || str[i]==':' || str[i]==';' || str[i]==',' || str[i]=='!' )
        {
            if((str[i+1]>='A' && str[i+1]<='Z') || (str[i+1]>='a' && str[i+1]<='z'))
            {
                substr[count][j]='\0';
                count++;
                j=0;
            }

        }
        else
        {

            substr[count][j]=str[i];
            j++;
        }
    }
    substr[count][j]='\0';
}

void check_substring()
{
    register int i,j;
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<=count;j++)
        {
            if(!strcmp(substr[i],substr[j]))
            {
                srand(j);
                substr[j][0]=rand()%100;
                a[i]++;
            }
        }
    }

}

int fact(int n)
{
    if(n==0 || n==1)
        return 1;

    register int i,fac=1;
    for(i=1;i<=n;i++)
        fac*=i;
    return fac;
}


int main()
{

    register int i,j;

    int t;
    scanf("%d",&t);
    int p[t];
    for(j=0;j<t;j++)
        p[j]=1;

    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        create_substring();
        check_substring();

        for(j=0;j<=count;j++)
             p[i]*=fact(a[j]+1);

        p[i]=fact(count+1)/p[i];

        printf("%d/%d",1,p[i]);
        if(i!=t-1)
            printf("\n");

        for(j=0;j<10;j++)
            a[j]=0;
        count=0;
    }
    return 0;
}
