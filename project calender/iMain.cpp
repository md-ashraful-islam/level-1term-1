#include "iGraphics.h"
#include<stdio.h>
#include<windows.h>
#include<string.h>

#define MAX 100

void calculate();
void saveeventinfile();
int check(int mx,int my);
int detertotalday(int x,int y);
void strdel(char *p);
void sortevent();
void deleteevent(int index1);
void saveall(int box);
void strdelcursor(char *p);

FILE *fp;
int t,total_day_of_month,year1,display,temp_point,box,itemp,cursor,i,j,measure,count,k,index;
int timerver,todayvalue;
double wide_line;
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
    int determinenote;
    daytype thatday;
    char from[16];
    char to[16];
    char title[32];
    char location[72];
    char note[72];
    char note2[72];
}eventtype;

eventtype event[MAX],temp;

typedef struct
{
    int x1;
    int x2;
    int y1;
    int y2;
    daytype date;
}position;

position dayposition[31];

void iDraw()
{

    iClear();


    iSetColor(0,0,0);
    switch(monthfd.month)
    {
        case 1:iShowBMP(0,0,"Winter-Veluwe-1024x682.bmp");
            break;

        case 2:iShowBMP(0,0,"landscapes-beautiful.bmp");
            break;

        case 3:iShowBMP(0,0,"green+blue.bmp");
            break;

        case 4:iShowBMP(0,0,"Spring_Sheet.bmp");
            break;

        case 5:iShowBMP(0,0,"3fcc4592-8fd8-413d-b523.bmp");
            break;

        case 6:iShowBMP(0,0,"4257134-beautiful-.bmp");
            break;

        case 7:iShowBMP(0,0,"wc1801886.bmp");
            break;

        case 8:iShowBMP(0,0,"513070488.bmp");
            break;

        case 9:iShowBMP(0,0,"floral-background-design_1215-268.bmp");
            break;

        case 10:iShowBMP(0,0,"miscellaneous.bmp");
            break;

        case 11:iShowBMP(0,0,"e7fdb95ee4c37a784dfd22.bmp");
            break;

        case 12:iShowBMP(0,0,"IMG_1104793.bmp");
            break;

    }


    iSetColor(0,0,0);

    if(display==0)
    {
        for(i=6;i>-1;i--)
        {
            for(j=0;j<7;j++)
            {
                iRectangle(60*(j+1), 60*(i+1), 60, 60);
                if(i==6)
                    iText(60*(j+1)+10, 60*(i+1)+27,str[j], GLUT_BITMAP_HELVETICA_18);

                else if((j+1)%7==monthfd.daycount && i==5)
                {
                    t=1;
                    measure=0;
                }
                if(t)
                {
                    if(measure+1==today.day && today.month==monthfd.month && today.year==monthfd.year)
                    {
                        iSetColor(0,100,250);
                        iFilledRectangle(60*(j+1)+1, 60*(i+1)+1, 58, 58);
                        iSetColor(0,0,0);
                        for(wide_line=0;wide_line<1;wide_line+=.1)
                            iRectangle(60*(j+1)+5+wide_line, 60*(i+1)+5+wide_line, 50-wide_line*2, 50-wide_line*2);
                        iSetColor(0,0,0);
                    }
                    iText(60*(j+1)+20, 60*(i+1)+27,d[measure], GLUT_BITMAP_HELVETICA_18);

                    for(k=0;k<=count;k++)
                    {
                        if(measure+1==event[k].thatday.day && monthfd.month==event[k].thatday.month && monthfd.year==event[k].thatday.year)
                        {
                            iSetColor(255,0,0);
                            iText(60*(j+1)+14, 60*(i+1)+15,"*", GLUT_BITMAP_HELVETICA_10);
                            iSetColor(0,0,0);
                            iText(60*(j+1)+18, 60*(i+1)+15,"event", GLUT_BITMAP_HELVETICA_10);

                        }
                    }

                    measure++;
                    if(measure==total_day_of_month)
                        t=0;
                }
            }
            iSetColor(0,0,0);
            iText(70,500,month[monthfd.month-1],GLUT_BITMAP_HELVETICA_18);
            iText(135,500,year[year1],GLUT_BITMAP_HELVETICA_18);
            iRectangle(60,60,420,420);
        }
        iSetColor(220,220,220);
        iFilledRectangle(350,500,70,20);
        iSetColor(0,0,0);
        iText(357,505,"PREVIOUS",GLUT_BITMAP_HELVETICA_10);

        iSetColor(220,220,220);
        iFilledRectangle(425,500,40,20);
        iSetColor(0,0,0);
        iText(430,505,"NEXT",GLUT_BITMAP_HELVETICA_10);
        iSetColor(220,220,220);
        iFilledRectangle(440,30,75,18);
        iSetColor(0,0,0);
        iText(445,35,"ALL EVENTS",GLUT_BITMAP_HELVETICA_10);
        iSetColor(0,0,0);

    }
    else if(display==1 || display==3)
    {
        iText(50,550,"EVENT OF ",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(180,550,d[event[index].thatday.day-1],GLUT_BITMAP_TIMES_ROMAN_24);
        iText(200,550," ",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(210,550,month[event[index].thatday.month-1],GLUT_BITMAP_TIMES_ROMAN_24);
        iText(265,550," ",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(275,550,year[(event[index].thatday.year)%1950],GLUT_BITMAP_TIMES_ROMAN_24);

        iText(50,500,"TITLE: ",GLUT_BITMAP_HELVETICA_18);
        iRectangle(165,495,165,25);
        iText(50,460,"LOCATION: ",GLUT_BITMAP_HELVETICA_18);
        iRectangle(165,452,350,25);
        iText(50,412,"FROM: ",GLUT_BITMAP_HELVETICA_18);
        iRectangle(165,407,80,25);
        iText(50,367,"TO: ",GLUT_BITMAP_HELVETICA_18);
        iRectangle(165,360,80,25);
        iText(50,325,"NOTE: ",GLUT_BITMAP_HELVETICA_18);
        iRectangle(165,295,350,45);

        iText(170,505,event[index].title,GLUT_BITMAP_HELVETICA_10);
        iText(170,463,event[index].location,GLUT_BITMAP_HELVETICA_10);
        iText(170,417,event[index].from,GLUT_BITMAP_HELVETICA_10);
        iText(170,370,event[index].to,GLUT_BITMAP_HELVETICA_10);
        iText(170,312,event[index].note2,GLUT_BITMAP_HELVETICA_10);
        iText(170,327,event[index].note,GLUT_BITMAP_HELVETICA_10);
        if(display==1)
        {
            iSetColor(220,220,220);
            iFilledRectangle(100,50,60,25);
            iFilledRectangle(400,50,60,25);
            iSetColor(0,0,0);
            iText(105,55,"SAVE",GLUT_BITMAP_HELVETICA_18);
            iText(405,55,"BACK",GLUT_BITMAP_HELVETICA_18);
            iSetColor(0,0,0);
        }
        else
        {
            iSetColor(0,220,0);
            iFilledRectangle(250,50,85,25);
            iSetColor(0,0,0);
            iText(255,55,"MODIFY",GLUT_BITMAP_HELVETICA_18);
            iSetColor(0,0,0);
        }
    }
    else if(display==2){
        if(count==0)
            iText(140,350,"!!!THERE IS NO EVENT",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(130,550,"DETAILS OF ALL EVENTS",GLUT_BITMAP_TIMES_ROMAN_24);
        iSetColor(220,220,220);
        iFilledRectangle(450,10,45,20);
        iSetColor(0,0,0);
        iText(455,15,"BACK",GLUT_BITMAP_9_BY_15);
        iSetColor(0,0,0);
        if(count>=3){
            if(itemp){
                iSetColor(220,220,220);
                iFilledRectangle(350,500,70,20);
                iSetColor(0,0,0);
                iText(357,505,"PREVIOUS",GLUT_BITMAP_HELVETICA_10);
            }
            if((itemp+1)*3<count){
                iSetColor(220,220,220);
                iFilledRectangle(425,500,40,20);
                iSetColor(0,0,0);
                iText(430,505,"NEXT",GLUT_BITMAP_HELVETICA_10);
            }
        }
        for(i=0;(i+itemp*3<count) && i<3;i++)
        {
            iSetColor(0,0,0);
            iText(50,460-(i%3)*150,d[event[i+itemp*3].thatday.day-1],GLUT_BITMAP_HELVETICA_18);
            iText(65,460-(i%3)*150," ",GLUT_BITMAP_HELVETICA_18);
            iText(72,460-(i%3)*150,month[event[i+itemp*3].thatday.month-1],GLUT_BITMAP_HELVETICA_18);
            iText(115,460-(i%3)*150," ",GLUT_BITMAP_HELVETICA_18);
            iText(120,460-(i%3)*150,year[(event[i+itemp*3].thatday.year)%1950],GLUT_BITMAP_HELVETICA_18);
            iText(50,440-(i%3)*150,"TITLE: ",GLUT_BITMAP_9_BY_15);
            iText(50,420-(i%3)*150,"LOCATION: ",GLUT_BITMAP_9_BY_15);
            iText(50,400-(i%3)*150,"FROM: ",GLUT_BITMAP_9_BY_15);
            iText(50,380-(i%3)*150,"TO: ",GLUT_BITMAP_9_BY_15);
            iText(50,360-(i%3)*150,"NOTE: ",GLUT_BITMAP_9_BY_15);
            iText(150,438-(i%3)*150+3,event[i+itemp*3].title,GLUT_BITMAP_HELVETICA_12);
            iText(150,418-(i%3)*150+1,event[i+itemp*3].location,GLUT_BITMAP_HELVETICA_12);
            iText(150,398-(i%3)*150+3,event[i+itemp*3].from,GLUT_BITMAP_HELVETICA_12);
            iText(150,378-(i%3)*150+3,event[i+itemp*3].to,GLUT_BITMAP_HELVETICA_12);
            iText(150,345-(i%3)*150+2,event[i+itemp*3].note2,GLUT_BITMAP_HELVETICA_12);
            iText(150,358-(i%3)*150+2,event[i+itemp*3].note,GLUT_BITMAP_HELVETICA_12);
            if((i+itemp*3)%3==0)
            {
                iSetColor(255,255,250);
                iFilledRectangle(540,400,16,16);
                iFilledRectangle(540,420,16,16);
                iSetColor(255,0,0);
                for(wide_line=0;wide_line<1;wide_line+=.1)
                {
                    iLine(540,400+wide_line,556,416+wide_line);
                    iLine(540,400-wide_line,556,416-wide_line);
                    iLine(540,416-wide_line,556,400-wide_line);
                    iLine(540,416+wide_line,556,400+wide_line);
                }
                iSetColor(0,0,0);
                for(wide_line=0;wide_line<2;wide_line+=0.1)
                {
                    iLine(547-wide_line,427+wide_line,553-wide_line,433+wide_line);
                    iLine(541,421,546-wide_line,426+wide_line);
                    iLine(547+wide_line,427-wide_line,553+wide_line,433-wide_line);
                    iLine(541,421,546+wide_line,426-wide_line);
                }
                iSetColor(0,0,0);
            }
            if((i+itemp*3)%3==1)
            {
                iSetColor(255,255,250);
                iFilledRectangle(540,250,16,16);
                iFilledRectangle(540,270,16,16);
                iSetColor(255,0,0);
                for(wide_line=0;wide_line<1;wide_line+=.1)
                {
                    iLine(540,250+wide_line,556,266+wide_line);
                    iLine(540,250-wide_line,556,266-wide_line);
                    iLine(540,266-wide_line,556,250-wide_line);
                    iLine(540,266+wide_line,556,250+wide_line);
                }
                iSetColor(0,0,5);
                for(wide_line=0;wide_line<2;wide_line+=0.1)
                {
                    iLine(547-wide_line,277+wide_line,553-wide_line,283+wide_line);
                    iLine(541,271,546-wide_line,276+wide_line);
                    iLine(547+wide_line,277-wide_line,553+wide_line,283-wide_line);
                    iLine(541,271,546+wide_line,276-wide_line);
                }
            }
            if((i+itemp*3)%3==2)
            {
                iSetColor(255,255,250);
                iFilledRectangle(540,100,16,16);
                iFilledRectangle(540,120,16,16);
                iSetColor(255,0,0);
                for(wide_line=0;wide_line<1;wide_line+=.1)
                {
                    iLine(540,100+wide_line,556,116+wide_line);
                    iLine(540,100-wide_line,556,116-wide_line);
                    iLine(540,116-wide_line,556,100-wide_line);
                    iLine(540,116+wide_line,556,100+wide_line);
                }
                iSetColor(0,0,5);
                for(wide_line=0;wide_line<2;wide_line+=0.1)
                {
                    iLine(547-wide_line,127+wide_line,553-wide_line,133+wide_line);
                    iLine(541,121,546-wide_line,126+wide_line);
                    iLine(547+wide_line,127-wide_line,553+wide_line,133-wide_line);
                    iLine(541,121,546+wide_line,126-wide_line);
                }
                iSetColor(0,0,0);
            }
        }
    }
}

void iMouseMove(int mx, int my){}

int detertotalday(int x,int y)
{
    switch(x)
    {
        case 1:return 31;
        case 2:if(y%400==0 || (y%100!=0 && y%4==0))return 29;
            return 28;
        case 3:return 31;
        case 4:return 30;
        case 5:return 31;
        case 6:return 30;
        case 7:return 31;
        case 8:return 31;
        case 9:return 30;
        case 10:return 31;
        case 11:return 30;
        case 12:return 31;
    }
}
int check(int mx,int my)
{

    for(int i=0;i<total_day_of_month;i++)
    {
        if((mx>=dayposition[i].x1 && mx<=dayposition[i].x2) && (my>=dayposition[i].y1 && my<=dayposition[i].y2))
            return i+1;
    }
    return 0;
}

void iMouse(int button, int state, int mx, int my)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
//        printf("%d %d\n",mx,my);
        if(display==0)
        {
            temp_point=check(mx,my);
            if(temp_point)
            {
                event[count].thatday.day=temp_point;
                event[count].thatday.month=monthfd.month;
                event[count].thatday.year=monthfd.year;
                mx=0;
                my=0;
                display=1;
                index=count;
                count++;
            }
            if((mx>=350 && mx<=420) && (my>=500 && my<=520))
            {
                monthfd.month--;
//                printf("%d\n",monthfd.month);
                if(monthfd.month==0)
                {
                    monthfd.month=12;
                    year1--;
                    monthfd.year--;
                }
                total_day_of_month=detertotalday(monthfd.month,monthfd.year);
                monthfd.daycount=(monthfd.daycount-total_day_of_month%7);
                if(monthfd.daycount<0)
                    monthfd.daycount+=7;
                calculate();
            }
            if((mx>=425 && mx<=460) && (my>=500 && my<=520))
            {
                monthfd.daycount=(monthfd.daycount+total_day_of_month)%7;
                monthfd.month++;
//                printf("%d\n",monthfd.month);
                if(monthfd.month==13)
                {
                    monthfd.month=1;
                    year1++;
                    monthfd.year++;
                }
                total_day_of_month=detertotalday(monthfd.month,monthfd.year);
                calculate();
            }
            if((mx>=440 && mx<=515) && (my>=30 && my<=50))
            {
                sortevent();
                display=2;
            }
        }
        else if(display==1 || display==3)
        {
            if((mx>=165 && mx<=330) && (my>=495 && my<=520))
            {
                box=1;
                saveall(1);
            }
            else if((mx>=165 && mx<=515) && (my>=452 && my<=487))
            {
                box=2;
                saveall(2);
            }
            else if((mx>=165 && mx<=245) && (my>=407 && my<=432))
            {
                box=3;
                saveall(3);
            }
            else if((mx>=165 && mx<=245) && (my>=360 && my<=385))
            {
                box=4;
                saveall(4);
            }
            else if((mx>=165 && mx<=515) && (my>=295 && my<=340))
            {
                box=5;
                saveall(5);
            }
            else if(display==1 && (mx>=100 && mx<=160) && (my>=50 && my<=75))
            {
                saveall(0);
                event[index].dayvalue=event[index].thatday.year*10000+event[index].thatday.month*100+event[index].thatday.day;
                mx=0;
                my=0;
                box=0;
                saveeventinfile();
                display=0;
            }
            else if(display==1 && (mx>=400 && mx<=460) && (my>=50 && my<=75))
            {
                deleteevent(index);
                display=0;
                mx=0;
                my=0;
                box=0;
            }
            else if(display==3 && (mx>=250 && mx<=385) && (my>=50 && my<=75))
            {
                saveall(0);
                mx=0;
                my=0;
                box=0;
                saveeventinfile();
                display=2;
            }
        }
        else if(display==2)
        {
            if((mx>=450 && mx<=495) && (my>=10 && my<=30))
            {
                mx=0;
                my=0;
                itemp=0;
                display=0;
            }
            else if(itemp && (mx>=350 && mx<=420) && (my>=500 && my<=520))
                itemp--;
            else if((itemp+1)*3<count && (mx>=425 && mx<=460) && (my>=500 && my<=520))
                itemp++;
            else if(((itemp*3+1)<count) && (mx>=540 && mx<=556) && (my>=250 && my<=266))
            {
                deleteevent(itemp*3+1);
                if(((itemp)*3==count) && itemp)
                    itemp--;
            }
            else if(((itemp*3+2)<count) && (mx>=540 && mx<=556) && (my>=100 && my<=116))
            {
                deleteevent(itemp*3+2);
                if(((itemp)*3==count) && itemp)
                    itemp--;
            }
            else if(((itemp*3)<count) && (mx>=540 && mx<=556) && (my>=400 && my<=416))
            {
                deleteevent(itemp*3);
                if(((itemp)*3==count) && itemp)
                    itemp--;
            }
            else if(((itemp*3+1)<count) && (mx>=540 && mx<=556) && (my>=270 && my<=286))
            {
                display=3;
                index=itemp*3+1;
            }
            else if(((itemp*3+2)<count) && (mx>=540 && mx<=556) && (my>=120 && my<=136))
            {
                display=3;
                index=itemp*3+2;
            }
            else if(((itemp*3)<count) && (mx>=540 && mx<=556) && (my>=420 && my<=436))
            {
                display=3;
                index=itemp*3;
            }
        }
    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN){}
}

void saveall(int box)
{
    strdelcursor(event[index].title);
    strdelcursor(event[index].location);
    strdelcursor(event[index].from);
    strdelcursor(event[index].to);
    strdelcursor(event[index].note);
    strdelcursor(event[index].note2);
}

void sortevent()
{
    k=0;
    for(i=0;i<count;i++)
        if(event[i].dayvalue>todayvalue)
            k++;

    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if((event[i].dayvalue-todayvalue)<(event[j].dayvalue-todayvalue))
            {
                temp=event[i];
                event[i]=event[j];
                event[j]=temp;
            }
        }
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if((event[i].dayvalue-todayvalue)>(event[j].dayvalue-todayvalue))
            {
                temp=event[i];
                event[i]=event[j];
                event[j]=temp;
            }
        }
    }
}

void strdel(char *p)
{
    p=p+strlen(p)-1;
    *p='\0';
}

void strdelcursor(char *p)
{
    for(i=0;i<strlen(p);i++)
    {
        if(*(p+i)=='|')
        {
            for(j=i;j<strlen(p)-1;j++)
                *(p+j)=*(p+j+1);
            *(p+strlen(p)-1)='\0';
        }
    }
}

void cursorindicator()
{
    if(box)
    if(cursor>5)
    {
        cursor=0;
        switch(box)
        {
            case 1:strcat(event[index].title,"|");
                break;
            case 2:strcat(event[index].location,"|");
                break;
            case 3:strcat(event[index].from,"|");
                break;
            case 4:strcat(event[index].to,"|");
                break;
            case 5:if(!event[index].determinenote)
                    strcat(event[index].note,"|");
                else
                    strcat(event[index].note2,"|");
                break;
            default:
                break;
        }
    }
    else
    {
        cursor++;
        switch(box)
        {
            case 1:strdelcursor(event[index].title);
                break;
            case 2:strdelcursor(event[index].location);
                break;
            case 3:strdelcursor(event[index].from);
                break;
            case 4:strdelcursor(event[index].to);
                break;
            case 5:if(!event[index].determinenote)
                    strdelcursor(event[index].note);
                else
                    strdelcursor(event[index].note2);
                break;
            default:
                break;
        }
    }
}

void iKeyboard(unsigned char key)
{
    iPauseTimer(timerver);

    if(box==5 && strlen(event[index].note)>50 && key==' ')
    {
        strdelcursor(event[index].note);
        event[index].determinenote=1;
    }
    else if(box==5 && strlen(event[index].note2)<2 && key=='\b')
    {
        strdelcursor(event[index].note2);
        event[index].determinenote=0;
    }

    if(box==5  && (key=='\n' || key=='\r'))
    {
        if(!event[index].determinenote)
        {
            event[index].determinenote=1;
            strdelcursor(event[index].note);
            strcat(event[index].note2," ");
        }
        else
        {
            strdelcursor(event[index].note);
            strdelcursor(event[index].note2);
            box=0;
        }
    }

    else if((key=='\n' || key=='\r'))
    {
        switch(box)
        {
            case 1:strdelcursor(event[index].title);
                break;
            case 2:strdelcursor(event[index].location);
                break;
            case 3:strdelcursor(event[index].from);
                break;
            case 4:strdelcursor(event[index].to);
                break;
            default:
                break;
        }
        box=0;
    }

    else if(key!='\b')
    {
        ch[0]=key;
        switch(box)
        {
            case 1:
                if(ch[0]>='a' && ch[0]<='z')
                    ch[0]-=32;
                strcat(event[index].title,ch);
                break;
            case 2:strcat(event[index].location,ch);
                break;
            case 3:strcat(event[index].from,ch);
                break;
            case 4:strcat(event[index].to,ch);
                break;
            case 5:if(!event[index].determinenote)
                    strcat(event[index].note,ch);
                else
                    strcat(event[index].note2,ch);
                break;
            default:
                break;
        }
    }

    else if(key=='\b')
    {
        switch(box)
        {
            case 1:if(strlen(event[index].title)>1)
                    strdel(event[index].title);
                break;
            case 2:if(strlen(event[index].location)>1)
                    strdel(event[index].location);
                break;
            case 3:if(strlen(event[index].from)>1)
                    strdel(event[index].from);
                break;
            case 4:if(strlen(event[index].to)>1)
                    strdel(event[index].to);
                break;
            case 5:if(!event[index].determinenote)
                {
                    if(strlen(event[index].note)>1)
                        strdel(event[index].note);
                }
                else
                    strdel(event[index].note2);
                break;
            default:
                break;
        }
    }
    iResumeTimer(timerver);
}
void iSpecialKeyboard(unsigned char key)
{
    if(key == GLUT_KEY_END)
    {
        exit(0);
    }
}
void calculate()
{
    for(i=5;i>-1;i--)
    {
        for(j=0;j<7;j++)
        {
            if((j+1)%7==monthfd.daycount && i==5)
            {
                t=1;
                measure=0;
            }
            if(t)
            {
                dayposition[measure].x1=60*(j+1);
                dayposition[measure].x2=60*(j+1)+60;
                dayposition[measure].y1=60*(i+1);
                dayposition[measure].y2=60*(i+1)+60;
                dayposition[measure].date.day=measure+1;
                dayposition[measure].date.daycount=monthfd.daycount;
                dayposition[measure].date.month=monthfd.month;
                dayposition[measure].date.year=monthfd.year;
                measure++;
                if(measure==total_day_of_month)
                    t=0;
            }
        }
    }
}

void saveeventinfile()
{
    if((fp=fopen("event","wb"))==NULL)
    {
        perror("File cannot open.");
        exit(1);
    }
    if(fwrite(&count,sizeof(count),1,fp)!=1)
    {
        printf("Error in writing number of event in file.");
        exit(10);
    }
    if(count && (fwrite(event,sizeof(event[0]),count,fp)!=count))
    {
        printf("Error in writing event in file.");
        exit(20);
    }
    fclose(fp);
}

void deleteevent(int index1)
{
    event[index1].dayvalue=0;
    strcpy(event[index1].title,"  ");
    strcpy(event[index1].location,"  ");
    strcpy(event[index1].from,"  ");
    strcpy(event[index1].to,"  ");
    strcpy(event[index1].note,"  ");
    strcpy(event[index1].note2," ");
    event[index1].thatday.day=0;
    event[index1].thatday.month=0;
    event[index1].thatday.year=0;
    event[index1].determinenote=0;
    sortevent();
    count--;
    saveeventinfile();
}

int main()
{
    if((fp=fopen("dayname.txt","r"))==NULL)
    {
        perror("Error in opening day name.");
        return -1;
    }
    for(i=0;i<7;i++)
        fscanf(fp,"%s\n",str[i]);
    fclose(fp);


    if((fp=fopen("day.txt","r"))==NULL)
    {
        perror("Error in opening day.");
        return -1;
    }
    for(i=0;i<31;i++)
        fscanf(fp,"%s\n",d[i]);
    fclose(fp);


    if((fp=fopen("year.txt","r"))==NULL)
    {
        perror("Error in opening year.");
        return -1;
    }
    for(i=0;i<100;i++)
    fscanf(fp,"%s\n",year[i]);
    fclose(fp);


    if((fp=fopen("monthname.txt","r"))==NULL)
    {
        perror("Error in opening month name.");
        return -1;
    }
    for(i=0;i<12;i++)
        fscanf(fp,"%s\n",month[i]);
    fclose(fp);


    if((fp=fopen("event","rb"))==NULL)
    {
        count=0;
    }

    else
    {
        if(fread(&count,sizeof(count),1,fp)!=1)
        {
            printf("Error in reading number of event in file.");
            exit(5);
        }
        if(fread(event,sizeof(event[0]),count,fp)!=count)
        {
            printf("Error in reading event in file.");
            exit(15);
        }
        fclose(fp);
    }
    for(i=count;i<MAX;i++)
    {
        event[i].dayvalue=0;
        strcpy(event[i].title,"  ");
        strcpy(event[i].location,"  ");
        strcpy(event[i].from,"  ");
        strcpy(event[i].to,"  ");
        strcpy(event[i].note,"  ");
        strcpy(event[i].note2," ");
    }

//    printf("%d",sizeof(event));

    SYSTEMTIME t;
    GetSystemTime(&t);
    today.day=t.wDay;
    today.month=t.wMonth;
    today.year=t.wYear;

    todayvalue=today.year*10000+today.month*100+today.day;
    year1=today.year%1950;
    today.daycount=(t.wDayOfWeek+2)%7;
    strcpy(today.dayname,str[today.daycount]);
    monthfd.day=1;
    monthfd.daycount=today.daycount-today.day%7+1;

    if(monthfd.daycount<0)
        monthfd.daycount+=7;

    monthfd.month=t.wMonth;
    monthfd.year=t.wYear;
    strcpy(monthfd.dayname,str[monthfd.daycount]);
    total_day_of_month=detertotalday(monthfd.month,monthfd.year);
    calculate();
    timerver=iSetTimer(100,cursorindicator);


    iInitialize(1024, 700, "CALENDER");

    return 0;
}

