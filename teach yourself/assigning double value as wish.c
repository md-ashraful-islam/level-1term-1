#include<stdio.h>

int main()
{
    int count=0,i;
    double d;
    FILE *fp;

    if((fp=fopen("VALUES","wb"))==NULL)
    {
        perror("File cannot open for writing.");
        return 1;
    }
    printf("Enter double value(0 to stop): ");
    scanf("%lf",&d);

    while(d)
    {
        if((fwrite(&d,sizeof(double),1,fp))!=1)
        {
            printf("Error in writing.");
            return 5;
        }
        count++;
        scanf("%lf",&d);

    }
    if((fwrite(&count,sizeof(int),1,fp))!=1)
    {
        printf("Error in writing.");
        return 6;
    }
    fclose(fp);

    if((fp=fopen("VALUES","rb"))==NULL)
    {
        perror("File cannot open for reading.");
        return 2;
    }

    fseek(fp,-sizeof(int),SEEK_END);

    if((fread(&count,sizeof(int),1,fp))!=1)
    {
        printf("Error in reading count.");
        return 12;
    }

    fseek(fp,0,0);

    printf("Your double values is: ");

    for(i=0;i<count;i++)
    {
        if((fread(&d,sizeof(double),1,fp))!=1)
        {
            printf("Error in reading double.");
            return 10;
        }
        printf("%lf\n",d);
    }
    fclose(fp);

    return 0;
}

