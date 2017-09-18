#include<stdio.h>
int main()
{
    int x,y;
    char filename1[]="my test for program.txt",filename2[]="output file.txt";
    FILE *fp1,*fp2;

    fp1=fopen(filename1,"r");
    fp2=fopen(filename2,"a");

    fscanf(fp1,"%d%d",&x,&y);
    fprintf(fp2,"\nThe sum of %d and %d is %d.",x,y,x+y);

    fclose(fp1);
    fclose(fp2);

    return 0;

}
