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
    int m[10],e[10],b[10],a[10],t,i,t2;

    for(i=0;i<10;i++)
    {
        fgets(line1,20,fp1);
//        printf("%s\n",line1);
        sscanf(line1,"%d %d",&t,&t2);
        m[t-1]=t2;

        fgets(line2,20,fp2);
//        printf("%s\n",line2);
        sscanf(line2,"%d %d",&t,&t2);
        e[t-1]=t2;

        fgets(line3,20,fp3);
//        printf("%s\n",line3);
        sscanf(line3,"%d %d",&t,&t2);
        b[t-1]=t2;
    }

//    for(i=0;i<10;i++)
//        printf("%d\t%d\t%d\n",m[i],e[i],b[i]);

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
