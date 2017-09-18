#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    int i;
    for(i=0;*(char *)(a+i) && *(char *)(b+i);i++)
    {
        if((*(char *)(a+i)!=*(char *)(b+i)))
            return (*(char *)(a+i)-*(char *)(b+i));
    }
    return (*(char *)(a)-*(char *)(b));
}

int main()
{
    char s[5][33];
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf(" %[^\n]",s[i]);
//        if(s[i]==EOF)
//        {
//            j=i;
//            break;
//        }

    }

    qsort(s,5,33,compare);

    printf("\n\n");

    for(i=0;i<5;i++)
        printf("%s\n",s[i]);

    return 0;
}
