
#include<stdio.h>
#include<windows.h>
#include<string.h>


FILE *fp;
int t=0,tdom,year1=0,display=0,tp=0,tkk=0,box=0,itemp=0,cursor=0,i,j,m,cnt=0,k,index=0;
int timerver=0,todayvalue=0,determinenote[50]={0};
char str[7][4],d[31][3],month[12][4],year[100][5],ch[2];

typedef struct{
    char dayname[3];
    int day;
    int month;
    int year;
    int daycount;
}daytype;

daytype today,monthfd;

typedef struct{
    int dayvalue;
    daytype thatday;
    char from[50];
    char to[50];
    char title[70];
    char location[100];
    char note[300];
    char note2[300];
}eventtype;

eventtype event[50],temp;

typedef struct
{
    int x1;
    int x2;
    int y1;
    int y2;
    daytype date;
}position;

position dayposition[31];




void saveeventinfile()
{
    fp=fopen("event.txt","w");
    if(fp==NULL)
    {
        perror("File cannot open.");
        exit(1);
    }
    fprintf(fp,"%d\n",cnt);
    for(i=0;i<cnt;i++)
    {
        fprintf(fp,"%d\n%d\n%d-%d-%d\n",event[i].dayvalue,determinenote[i],event[i].thatday.day,event[i].thatday.month,event[i].thatday.year);
        fprintf(fp,"%s\n%s\n%s\n%s\n%s\n\n%s\n\n",event[i].title,event[i].location,event[i].from,event[i].to,event[i].note,event[i].note2);
    }
    fclose(fp);
}



int main()
{


    for(i=0;i<50;i++)
    {
        event[i].dayvalue=0;
        strcpy(event[i].title," ");
        strcpy(event[i].location," ");
        strcpy(event[i].from," ");
        strcpy(event[i].to," ");
        strcpy(event[i].note," ");
        strcpy(event[i].note2," ||");
    }

    fp=fopen("event.txt","r");
    if(fp==NULL)
    {
        perror("File cannot open.");
        exit(1);
    }
    fscanf(fp,"%d\n",&cnt);
    for(i=0;i<cnt;i++)
    {
        fscanf(fp,"%d\n%d\n%d-%d-%d\n",&event[i].dayvalue,&determinenote[i],&event[i].thatday.day,&event[i].thatday.month,&event[i].thatday.year);
        fscanf(fp,"%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n\n%[^\n]\n\n",event[i].title,event[i].location,event[i].from,event[i].to,event[i].note,event[i].note2);
    }
    fclose(fp);

    printf("%d\n",cnt);
    for(i=0;i<cnt;i++)
    {
        printf("%d\n%d\n%d-%d-%d\n",event[i].dayvalue,determinenote[i],event[i].thatday.day,event[i].thatday.month,event[i].thatday.year);
        printf("%s\n%s\n%s\n%s\n%s\n\n%s\n\n",event[i].title,event[i].location,event[i].from,event[i].to,event[i].note,event[i].note2);
    }

    return 0;
}
