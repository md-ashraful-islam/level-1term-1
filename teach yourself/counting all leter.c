#include<stdio.h>

int main()
{
    int count[26]={0},i,j,ch;
    char filename[20];

    printf("Please enter the filename: ");
    scanf(" %[^\n]",filename);

    FILE *fp;

    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("Program cannot oopen file.");
        return -1;
    }


    while((ch=fgetc(fp))!=EOF)
        for(i='a',j=0;i<='z';i++,j++)
            if((ch|32)==i)
                count[j]++;

    fclose(fp);

    for(i='A',j=0;i<='Z';i++,j++)
        printf("Character: %c\tcount: %d\n",i,count[j]);

    return 0;
}
