#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp3,*fpo;
    char *math="math.txt";
    char *english="english.txt";
    char *bangla="bangla.txt";
    char *average="average.txt";

    fp1=fopen(math,"r");
    fp2=fopen(english,"r");
    fp3=fopen(bangla,"r");
    fpo=fopen(average,"w");

    char line1[20],line2[20],line3[20];
    int m[10],e[10],b[10],a[10],i;

    for(i=0;i<10;i++)
    {
        fseek(fp1,2,SEEK_CUR);
        fgets(line1,5,fp1);
        sscanf(line1,"%d",&m[i]);

        fseek(fp2,2,SEEK_CUR);
        fgets(line2,5,fp2);
        sscanf(line2,"%d",&e[i]);

        fseek(fp3,2,SEEK_CUR);
        fgets(line3,5,fp3);
        sscanf(line3,"%d",&b[i]);
    }

    for(i=0;i<10;i++)
    {
        fprintf(fpo,"%d %.2f\n",i+1,(m[i]+b[i]+e[i])/3.0);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fpo);

    return 0;

}
