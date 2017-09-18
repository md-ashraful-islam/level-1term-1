#include<stdio.h>

int main()
{
    int i;
    double test,d[10]={20.545,545643.595,4843.4884,553.488484,.562,655623,52.54,452.5454,45.54,82.22};


    printf("The data is: \n");
    for(i=0;i<10;i++)
        printf("%lf\n",d[i]);

    FILE *fp;

    if((fp=fopen("array of double1.txt","wb"))==NULL)
    {
        perror("File cannot open for writing.");
        return 1;
    }

    if((fwrite(d,sizeof(double),10,fp))!=10)
    {
        printf("Error is happened in assigning data.");
        return 5;
    }
    fclose(fp);


    if((fp=fopen("array of double1.txt","rb"))==NULL)
    {
        perror("File cannot open for reading.");
        return 2;
    }

    printf("Enter your desire double position: ");
    scanf("%d",&i);

    if(fseek(fp,(i-1)*sizeof(double),SEEK_SET))
    {
        printf("Seek error.");
        return 10;
    }

    if((fread(&test,sizeof(double),1,fp))!=1)
    {
        printf("Error is happening in taking data.");
        return 12;
    }
    printf("\n%lf\n",test);
    fclose(fp);

    return 0;
}

