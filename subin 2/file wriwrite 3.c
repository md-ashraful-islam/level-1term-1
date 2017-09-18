#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="myfile3.txt";
    fp=fopen(filename,"w");
    fprintf(fp,"this is a file which is created by my program.\n");
    fprintf(fp,"i am happy.");
    fclose(fp);

    fp=fopen(filename,"a");
    fprintf(fp,"this is an appended line.");
    fclose(fp);
    return 0;
}
