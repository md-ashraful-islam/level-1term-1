#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    char fn[50],str[100];
    printf("Please enter file name: ");
    scanf(" %[^\n]",fn);
    if((fp=fopen(fn,"rb"))==NULL)
    {
        perror("File can not be opened.");
        return 1;
    }

    while(1)
    {
        fgets(str,100,fp);
        printf(str);
        if(feof(fp))
            break;
        printf("Do you want to continue to read the file(y/n): ");
        if(getche()=='n')
            break;
        printf("\n");
    }
    fclose(fp);
    return 0;
}
