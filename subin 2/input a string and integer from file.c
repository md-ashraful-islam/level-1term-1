#include<stdio.h>
int main()
{
    FILE *fp_in,*fp_out;
    char *inputfile="my test for program.txt",*outputfile="out.txt";
    char line[80];
    int num1,num2,sum;

    fp_in=fopen(inputfile,"r");
    fp_out=fopen(outputfile,"w");

    fgets(line,80,fp_in);
    printf("LINE: %s\n",line);

    sscanf(line,"%d %d",&num1,&num2);

    sum=num1+num2;
    printf("%d %d %d \n",num1,num2,sum);
    fprintf(fp_out,"%d\n",sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;

}
