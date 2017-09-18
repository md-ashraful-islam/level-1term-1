#include<stdio.h>
int main()
{
    char filename1[]="my test for program.txt",filename2[]="output file.txt";
    FILE *fp1,*fp2;
    int a,b;

    fp1=fopen(filename1,"r");
    fscanf(fp1,"%d%d",&a,&b);


    fp2=fopen(filename2,"w");
    fprintf(fp2,"The summation of the two number is %d",a+b);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
