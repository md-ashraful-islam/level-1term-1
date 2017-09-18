#include<stdio.h>
#include<string.h>

void print_recurse(char *p)
{
    int l=strlen(p),i;
    for(i=l-1;i>=0;i--)
        printf("%c",*(p+i));
}


int main()
{
    char str[10000],sub[1000];
    int t,i,l,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        l=strlen(str);
        for(j=0,k=0;j<l;j++)
        {
            if(str[j]==' ' && k>0)
            {
                sub[k]='\0';
                print_recurse(sub);
                printf(" ");
                k=0;
            }
            else if(str[j]==' ')
                printf(" ");
            else
            {
                sub[k]=str[j];
                k++;
            }

        }
        sub[k]='\0';
        print_recurse(sub);
        if(i<t-1)
        printf("\n");
    }
    return 0;
}
