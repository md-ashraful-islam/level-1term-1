#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[1001];
    int i,t,a[26]={0},l;
    register int k,j;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf(" %[^\n]",str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            for(k='a';k<'z';k++)
            {
                if(k==str[j] || toupper(k)==str[j])
                    a[k-'a']++;
            }
        }
        for(j=0;j<26;j++)
        {
            if(a[j])
                printf("%c = %d\n",j+'a',a[j]);
            a[j]=0;
        }

    }
    return 0;
}
