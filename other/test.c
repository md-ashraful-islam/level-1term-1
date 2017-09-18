#include<stdio.h>
int main()
{
    int count,cnttr[10],i,j;
    FILE *fp;

    char *filename="Bank account details.txt";
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        perror("FILE does not open.");
        exit(1);
    }

    fscanf(fp,"%d",&count);
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%d",&cnttr[i]);
    }

//    for(i=0;i<count;i++)
//    {
//        fscanf(fp,"%d",&account[i].AccountNo);
//        fscanf(fp,"%s",account[i].AccountName);
//        fscanf(fp,"%d%d%d%d%d",&account[i].balance,&account[i].AccOpenDate.day,&account[i].AccOpenDate.month,&account[i].AccOpenDate.year);
//        for(j=0;j<cnttr[i];j++)
//        {
//            fscanf(fp,"%d%d%d",&account[i].Thistory[j].TID,&account[i].Thistory[j].Ttype,&account[i].Thistory[j].Tamount);
//            fscanf(fp,"%s",account[i].Thistory[j].Tdescription);
//            fscanf(fp,"%d%d%d",&account[i].Thistory[j].Tdate.day,&account[i].Thistory[j].Tdate.month,&account[i].Thistory[j].Tdate.year);
//        }
//    }
    fclose(fp);
    printf("%d\n",count);
    for(i=0;i<10;i++)
    {
        printf("%d\n",cnttr[i]);
    }

//    for(i=0;i<count;i++)
//        printf("*****\n%d\n****",account[i].AccountNo);







//    int a,b,c;
//    FILE *fp;
//    char *filename="test.txt";
//    fp=fopen(filename,"w");
//    fprintf(fp,"5\n10\n15");
//    fclose(fp);
//
//    fp=fopen(filename,"r");
//    fscanf(fp,"%d%d%d",&a,&b,&c);
//    fclose(fp);
//
//    printf("%d\t%d\t%d",a,b,c);
//    return 0;






//    int i;
//    FILE *fp,*fp1;
//    char *filename="calender.txt";
//    fp=fopen(filename,"r");
//    char *str[5];
//    for(i=0;i<5;i++)
//        str[i]=(char *)malloc(10);
//
//    for(i=0;i<5;i++)
//    {
//        fgets(str[i],10,fp);
//        fseek(fp,0,SEEK_CUR);
//    }
//
//
//
//    for(i=0;i<5;i++)
//        printf("%s",str[i]);
//
//    printf("%s",str[4]);
//
//    char p[]="pppp";
//    fp1=fopen("abc.txt","w");
//    fprintf(fp1,p);
//
//
//    char *filename1="Bank account details.txt";
//    fp=fopen(filename1,"w");
//    if(fp==NULL)
//    {
//        perror("FILE does not open.");
//        exit(1);
//    }
//
//    char p1[]="This a file which is opened by my programme.";
//
//    fprintf(fp,p1);
//    fclose(fp);
//    str[0]=(char *)malloc(5);
//    fgets(str[0],5,fp);
//    printf("%s",str[0]);
//    fclose(fp);
}
//for(i=1;i<5;i++)
//        fgets(str[i],5,fp);
//    for(i=1;i<5;i++)
//        printf("%s",str[i]);
