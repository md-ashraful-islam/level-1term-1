#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
    int i,j;
    if(argc!=3)
    {
        printf("Please enter argument correctly(argument must be two).");
        return 1;
    }

    i=(strlen(argv[1])>strlen(argv[2]))?(1):2;
    j=(i==1)?2:1;

    printf("Lexicographically %s is grater than %s",argv[i],argv[j]);

    return 0;
}
