#include<stdio.h>
#include<math.h>
#include "iGraphics.h"

int i=0,j=0,o=0,q=1,k=0,n,l=1,e=0;
int a[17][3]={0};
char a1[150000][2]={'0'};

void diskmove();
int highestdisks();
int highestdiskd();
int hanoi(int n,int s,int h,int d){
    if(n==1){
//        printf("Move disk from %d to %d\n",s,d);
        a1[i][0]=(char) s;
        a1[i][1]=(char) d;
        i++;
        return 0;
    }
    hanoi(n-1,s,d,h);
//    printf("Move disk from %d to %d\n",s,d);
    a1[i][0]=(char) s;
    a1[i][1]=(char) d;
    i++;
    hanoi(n-1,h,s,d);
}
void iDraw(){
    iClear();

    iSetColor(255, 255, 255);
    iText(175, 360, ("TOWER of HANOI"), GLUT_BITMAP_HELVETICA_18);
    iText(85, 330, ("1"), GLUT_BITMAP_TIMES_ROMAN_24);
    iText(160+90+2, 330, ("2"), GLUT_BITMAP_TIMES_ROMAN_24);
    iText(160*2+98, 330, ("3"), GLUT_BITMAP_TIMES_ROMAN_24);
    for(j=0;j<3;j++){
        iFilledRectangle(10+165*j+5*j,30,150,5);
        iFilledRectangle(85+165*j+3.5*j,30+5,5,255);
    }

    for(j=0;j<n;j++){
        iSetColor(255,(((20-5*e)+j*(20-5*e))>255?((20-5*e)+j*(20-5*e))/255:((20-5*e)+j*(20-5*e))),(((20-5*e)+j*(20-5*e))>255?((20-5*e)+j*(20-5*e))/255:((20-5*e)+j*(20-5*e))));
        iFilledRectangle(a[j][1],a[j][2],130-(5-2*e)*2*j,20-7*e);
    }
}
int highestdisks(){
    for(i=n-1;i>=0;i--){
        if(a[i][0]==a1[k][0]){
            o=1;
            return i;
        }
    }
}

int highestdiskd(){
    for(i=n-1;i>=0;i--)
    {
        if(a[i][0]==a1[k][1])
            return a[i][2]+(20-7*e);
    }
    return 15+20;
}

void diskmove(){
    int m;
    m=highestdiskd();
    j=highestdisks();

    if(a[j][2]<280 && q)
        a[j][2]+=(20-7*e);
    else if(a1[k][0]<a1[k][1] && (a1[k][1]-a1[k][0])*10>=l){
        a[j][1]+=17;
        q=0;
        l++;
    }
    else if(a1[k][0]>a1[k][1] && (a1[k][0]-a1[k][1])*10>=l){
        q=0;
        a[j][1]-=17;
        l++;
    }
    else if(m<a[j][2]){
        a[j][2]-=(20-7*e);
    }
    else{
        a[j][0]=a1[k][1];
        k++;
        o=0;
        q=1;
        l=1;
        if(a1[k][0]=='0')
        iPauseTimer(0);
    }
}

void iMouseMove(int mx, int my){}
void iMouse(int button, int state, int mx, int my){}
void iKeyboard(unsigned char key){
	if(key == 'p')
		iPauseTimer(0);
	if(key == 'r')
		iResumeTimer(0);
}
void iSpecialKeyboard(unsigned char key){
	if(key == GLUT_KEY_END)
		exit(0);
}

int main(){
    printf("Enter disk number: ");
    while(1){
        scanf("%d",&n);
        if(n<1)
            printf("!!!Enter disk number CORRECTLY: ");
        else if(n>17)
            printf("!!!This disk number should exit memory limit.\nEnter disk number AGAIN: ");
        else
            break;
    }
    if(n>11)
        e=1;

    iSetTimer(50/(pow(n,n)), diskmove);
    hanoi(n,1,2,3);
    for(i=0;i<n;i++){
        a[i][0]=1;
        a[i][1]=10+10+(5-2*e)*i;
        a[i][2]=30+5+(20-7*e)*i;
    }
    iInitialize(510,400,"TOWER of HANOI");
    return 0;
}
