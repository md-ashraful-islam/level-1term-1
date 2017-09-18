#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    FILE *fp;
    fp=fopen("just test.txt","r+");
    if(fp==NULL)
    {
        perror("Cannot open file.");
        return EXIT_FAILURE;
    }
    fscanf(fp," %[^\n]",str);
    fprintf(fp,"this is opened by my program.\n");

    fclose(fp);
    printf("%s",str);
    return 0;
}
