#include<stdio.h>

int main(int argc,char *argv[])
{
    if(argc!=2)
    {
        printf("There must be one Argument\nUse this format <filename>");
        return -1;
    }
    FILE *fp;
    int i;
    double d;
    char str[100];

    if((fp=fopen(argv[1],"w"))==NULL)
    {
        printf("Program can not open file.");
        return 2;
    }

    printf("Please enter an inter,a double and a string respectively: ");
    scanf("%d%lf %[^\n]",&i,&d,str);

    fprintf(fp,"%lf\n%d\n%s",d,i,str);
    fclose(fp);

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Program can not open file.");
        return 2;
    }

    fscanf(fp,"%lf\n%d\n%[^\n]",&d,&i,str);
    fclose(fp);

    printf("Your entered integer is %d\t double is %lf and string is\n%s",i,d,str);

    return 0;
}
