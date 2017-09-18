#include<stdio.h>
#include<string.h>

int main()
{
    register int j,k;
    int t,i,l1,l2,count;
    char str[130],sub[130];
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%s%s",str,sub);

        l1=strlen(str);
        l2=strlen(sub);

        for(j=0;j<l1;j++)
        {
            if(str[j]==sub[0])
            {
                for(k=1;k<l2;k++)
                {
                    if(str[j+k]!=sub[k])
                        break;
                }
                if(!sub[k])
                {
                    count++;
                }
            }
        }
        printf("%d",count);

        if(i<t-1)
            printf("\n");
    }

    return 0;
}
