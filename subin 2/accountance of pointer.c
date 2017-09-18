#include<stdio.h>
int main()
{
    char *cp,c;
    int *ip,i;
    double *dp,d;

    cp=&c;
    ip=&i;
    dp=&d;

    printf("Size of char   : %d\n",sizeof(char));
    printf("cp   : %p\n",cp);
    printf("cp+1 : %p\n",cp+1);
    printf("cp+2 : %p\n",cp+2);

    printf("\nSize of int   : %d\n",sizeof(int));
    printf("ip   : %p\n",ip);
    printf("ip+1 : %p\n",ip+1);
    printf("ip+2 : %p\n",ip+2);

    printf("\nSize of double: %d\n",sizeof(double));
    printf("dp   : %p\n",dp);
    printf("dp+1 : %p\n",dp+1);
    printf("dp+2 : %p\n",dp+2);

    return 0;
}
