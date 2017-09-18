#include<stdio.h>

int main()
{
    int i;
    double d[10]={20.545,545643.595,4843.4884,553.488484,.562,655623,52.54,452.5454,45.54,82.22};

    FILE *fp;

    if((fp=fopen("array of double.txt","wb"))==NULL)
    {
        perror("File cannot open for writing.");
        return 1;
    }

    for(i=0;i<10;i++)
        if((fwrite(&d[i],sizeof(double),1,fp))!=1)
        {
            printf("Error is happened in assigning data.");
            return 5;
        }
    fclose(fp);

    for(i=0;i<10;i++)
        d[i]=0;


    if((fp=fopen("array of double.txt","rb"))==NULL)
    {
        perror("File cannot open for reading.");
        return 2;
    }

    for(i=0;i<10;i++)
        if((fread(&d[i],sizeof(double),1,fp))!=1)
        {
            printf("Error is happened in taking data.");
            return 10;
        }
    fclose(fp);

    for(i=0;i<10;i++)
        printf("%lf\n",d[i]);

    return 0;
}
