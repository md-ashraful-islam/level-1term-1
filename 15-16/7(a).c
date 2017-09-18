#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("dhys.txt","rb");
    fseek(fp,0,SEEK_END);
    long long int n=ftell(fp);
    printf("%lld",n);
}
