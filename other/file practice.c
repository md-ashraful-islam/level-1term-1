#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    char ch1[]="  ";
    char ch2[]="  |";

    fp=fopen("filetest.txt","w");
    if(fp==NULL)
    {
        perror("File cannot open.");
        exit(1);
    }
    fprintf(fp,"%s\n%s",ch1,ch2);
    fclose(fp);

    char str1[50],str2[50];

    fp=fopen("filetest.txt","r");
    if(fp==NULL)
    {
        perror("File cannot open.");
        exit(1);
    }
    fscanf(fp,"%[^\n]\n%[^\n]",str1,str2);
    fclose(fp);

    printf("%s\n%s",str1,str2);

}
