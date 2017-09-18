#include<stdio.h>
int main()
{
    FILE *fp;

    char filename[]="mytext.txt";
    fp=fopen(filename,"w");

    fprintf(fp,"This is my text file which is created by my program.");
    fprintf(fp,"I am very happy.");

    fclose(fp);

    fprintf(fp,"The second line\n");
    return 0;
}
