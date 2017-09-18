#include<stdio.h>

int main()
{
    char fileoname[50],filenname[50];
    int choice=1;
    FILE *fp;

    while(choice)
    {
        printf("\n  CHOICE: \n\t1 for rename a file\n\t2 for remove a file\n\t3 for flush a file\n\t0 for exit\n  Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter file old name: ");
                scanf(" %[^\n]",fileoname);
                if((fp=fopen(fileoname,"r"))==NULL)
                    printf("Your file is not existed.");


                else
                {
                    printf("Enter file new name: ");
                    scanf(" %[^\n]",filenname);
                    fclose(fp);
                    if(rename(fileoname,filenname))
                        printf("File rename unsuccessful.");
                    else
                        printf("File successfully renamed.");
                }
                break;
            case 2:printf("Enter file name: ");
                scanf(" %[^\n]",fileoname);
                if((fp=fopen(fileoname,"r"))==NULL)
                    printf("Your file is not existed.");
                else
                {
                    fclose(fp);
                    if(remove(fileoname))
                        printf("File remove unsuccessful.");
                    else
                        printf("File successfully removed.");
                }
                break;
            case 3:printf("Enter file name: ");
                scanf(" %[^\n]",fileoname);
                if((fp=fopen(fileoname,"r"))==NULL)
                    printf("Your file is not existed.");
                else
                {
                    printf("Content of file before flush: \n");
                    while(!feof(fp))
                        putchar(fgetc(fp));
                    rewind(fp);
                    //like fseek(fp,0,SEEK_SET);
                    if(fflush(fp)==EOF)
                        printf("\nFile flush unsuccessful.");
                    else
                        printf("\nFile successfully flushed.");

                    printf("\nContent of file after flush: \n");
                    while(!feof(fp))
                        putchar(fgetc(fp));

                    fclose(fp);
                }
                printf("\n\n");
        }

    }

    return 0;
}
