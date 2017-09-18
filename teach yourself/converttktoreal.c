#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    double real;
    if(argc!=2)
    {
        printf("Usage: Convert <taka>\n");
        printf("Try again");
        exit(1);
    }

    real=atof(argv[1])/20;
    printf("Real: %lf",real);

    return 0;
}
