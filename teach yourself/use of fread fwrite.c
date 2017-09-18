#include<stdio.h>

int main()
{
    FILE *fp;
    int i=50,j;

    if((fp=fopen("readwrite.txt","wb"))==NULL)
    {
        perror("File cannot open for writing.");
        return 2;
    }

    if((fwrite(&i,sizeof(int),1,fp))!=1)
    {
        perror("There is an error while writing.");
        return 5;
    }

    fclose(fp);

    if((fp=fopen("readwrite.txt","rb"))==NULL)
    {
        perror("File cannot open for reading.");
        return 2;
    }

    if((fread(&j,sizeof(int),1,fp))!=1)
    {
        perror("There is an error while writing.");
        return 5;
    }
    fclose(fp);

    printf("\n%d\n",j);

    return 0;
}
