#include<stdio.h>

int compare(const void *a,const void *b)
{
    int i;
    for(i=0;*((char *)a+i) && *((char *)b+i);i++)
    {
        if(*((char *)a+i)!= *((char *)b+i))
            return (*((char *)a+i)-*((char *)b+i));
    }
    return 0;
}

int main()
{
    int i,j;
    char str[150][33],temp[100];

    printf("Enter 10 string: ");
    for(i=0;i<150;i++)
    {
        scanf(" %[^\n]",&str[i]);
        if(str[i][0]==EOF)
            break;
    }

    qsort(str,i,33,compare);
    printf("\n\nOUTPUT: \n");

    for(i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }

    return 0;
}
