#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


void gotoxy(int x,int y)
{
    COORD xy={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}

int choose,count=0,cnttr[10]={0};
FILE *fp;

typedef struct{
    int day;
    int month;
    int year;
}date;

date today;

typedef struct{
    int TID;
    int Ttype;
    int Tamount;
    date Tdate;
    char Tdescription[100];
}Transaction;

typedef struct{
    int AccountNo;
    int balance;
    date AccOpenDate;
    char AccountName[20];
    Transaction Thistory[20];
}acc;

acc account[10];

void menu()
{
    int i=0;
    system("cls");
    gotoxy(15,5);
    printf("CHOOSE");
    gotoxy(20,6);
    printf("0 for Opening Account.");
    gotoxy(20,7);
    printf("1 for Depositing Money.");
    gotoxy(20,8);
    printf("2 for Windrowing Money.");
    gotoxy(20,9);
    printf("3 for Showing Transaction history.");
    gotoxy(20,10);
    printf("4 for Showing Account Balance.");
    gotoxy(20,11);
    printf("5 for Transferring money.");
    gotoxy(20,12);
    printf("6 for exit.");
    gotoxy(15,13);
    printf("Enter your option: ");
    scanf("%d",&choose);
    while(1)
    {
        if(choose<0 || choose>6)
        {
            i++;
            gotoxy(15,13+i);
            printf("Enter your option rightly: ");
            scanf("%d",&choose);
        }
        else
            break;
    }

}

void openaccount()
{
    system("cls");


    account[count].AccOpenDate.day=today.day;
    account[count].AccOpenDate.month=today.month;
    account[count].AccOpenDate.year=today.year;
    printf("Please enter your account name: ");
    scanf(" %[^\n]",account[count].AccountName);
    account[count].AccountNo=100000+count;

    printf("\nYour account number is %d",account[count].AccountNo);
    account[count].balance=0;
    printf("\n\nYour account is successfully created.\n");
    printf("Press any key to go back main menu.");
    count++;
    getch();
}

int checkaccountno(int accno)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(account[i].AccountNo==accno)
            return i;
    }
    return 500;
}


void depositemoney()
{
    system("cls");
    int accno,accidx,amount;
    printf("Please enter your account no: ");
    scanf("%d",&accno);

    accidx=checkaccountno(accno);

    if(accidx==500)
    {
        printf("Your account number is invalid.\n");
        printf("Press any key to go back main menu.");
        getch();
        return;
    }
    printf("Enter amount: ");
    scanf("%d",&amount);

    account[accidx].balance+=amount;
    account[accidx].Thistory[cnttr[accidx]].TID=5000+cnttr[accidx];

    printf("Your tansaction ID is %d",account[accidx].Thistory[cnttr[accidx]].TID);

    account[accidx].Thistory[cnttr[accidx]].Tdate.day=today.day;
    account[accidx].Thistory[cnttr[accidx]].Tdate.month=today.month;
    account[accidx].Thistory[cnttr[accidx]].Tdate.year=today.year;

    account[accidx].Thistory[cnttr[accidx]].Tamount=amount;
    account[accidx].Thistory[cnttr[accidx]].Ttype=0;
    strcpy(account[accidx].Thistory[cnttr[accidx]].Tdescription,"DEPOSITE");

    printf("\n\nYou successfully deposite your money.\nNow your account money is %d\n",account[accidx].balance);
    printf("Press any key to go back main menu.\n");
    cnttr[accidx]++;
    getch();
}

void withdrawmoney()
{
    system("cls");
    int accno,accidx,amount;
    printf("Please enter your account no: ");
    scanf("%d",&accno);

    accidx=checkaccountno(accno);

    if(accidx==500)
    {
        printf("Your account number is invalid.\n");
        printf("Press any key to go back main menu.");
        getch();
        return;
    }

    printf("Enter amount: ");
    scanf("%d",&amount);
    while(account[accidx].balance<amount)
    {
        printf("You have not enough money for depositing.\nPlease carefully enter amount: ");
        scanf("%d",&amount);
    }

    account[accidx].balance-=amount;
    account[accidx].Thistory[cnttr[accidx]].TID=5000+cnttr[accidx];

    printf("Your tansaction ID is %d",account[accidx].Thistory[cnttr[accidx]].TID);

    account[accidx].Thistory[cnttr[accidx]].Tdate.day=today.day;
    account[accidx].Thistory[cnttr[accidx]].Tdate.month=today.month;
    account[accidx].Thistory[cnttr[accidx]].Tdate.year=today.year;

    account[accidx].Thistory[cnttr[accidx]].Tamount=amount;
    account[accidx].Thistory[cnttr[accidx]].Ttype=1;
    strcpy(account[accidx].Thistory[cnttr[accidx]].Tdescription,"WITHDRAW");

    printf("\n\nYou successfully withdrawing your money.\nNow your account money is %d\n",account[accidx].balance);
    printf("Press any key to go back main menu.\n");
    cnttr[accidx]++;
    getch();
}


void showthistory()
{
    system("cls");
    int accno,accidx,i;
    printf("Please enter your account no: ");
    scanf("%d",&accno);

    accidx=checkaccountno(accno);

    if(accidx==500)
    {
        printf("Your account number is invalid.\n");
        printf("Press any key to go back main menu.\n");
        getch();
        return;
    }

    if(cnttr[accidx]==0)
    {
        printf("No transaction occur in this Account.\n");
        printf("Press any key to go back main menu.");
        getch();
        return;
    }

    for(i=0;i<cnttr[accidx];i++)
    {
        printf("\nTransaction %d",i+1);
        printf("\nDATE:%d-%d-%d",account[accidx].Thistory[i].Tdate.day,account[accidx].Thistory[i].Tdate.month,account[accidx].Thistory[i].Tdate.year);
        printf("\nTransaction Id: %d",account[accidx].Thistory[i].TID);
        printf("\n%s money %dtk.",account[accidx].Thistory[i].Tdescription,account[accidx].Thistory[i].Tamount);
        printf("\n\n\n\n");
    }
    printf("Press any key to go back main menu.\n");
    getch();

}

void showaccbalan()
{
    system("cls");
    int accno,accidx;
    printf("Please enter your account no: ");
    scanf("%d",&accno);

    accidx=checkaccountno(accno);

    if(accidx==500)
    {
        printf("Your account number is invalid.\n");
        printf("Press any key to go back main menu.\n");
        getch();
        return;
    }
    printf("\nYour current account balance is %d.",account[accidx].balance);
    printf("\nPress any key to go back main menu.");
    getch();
}

void transfermoney()
{
    system("cls");
    int accno1,accno2,accidx1,accidx2,amount;
    printf("Enter your account number: ");
    scanf("%d",&accno1);

    accidx1=checkaccountno(accno1);

    if(accidx1==500)
    {
        printf("Your account number is invalid.\n");
        printf("Press any key to go back main menu.");
        getch();
        return;
    }

    printf("Enter transfer account number: ");
    scanf("%d",&accno2);

    accidx2=checkaccountno(accno2);

    if(accidx2==500)
    {
        printf("Your account number is invalid.\n");
        printf("Press any key to go back main menu.");
        getch();
        return;
    }

    printf("Enter amount: ");
    scanf("%d",&amount);

    while(account[accidx1].balance<amount)
    {
        printf("You have not enough money for transaction.\n");
        printf("Please enter your amount correctly: ");
        scanf("%d",&amount);
    }

    account[accidx1].balance-=amount;
    account[accidx2].balance+=amount;



    account[accidx1].Thistory[cnttr[accidx1]].TID=5000+cnttr[accidx1];
    printf("Your transaction ID is %d\n",account[accidx1].Thistory[cnttr[accidx1]].TID);

    account[accidx1].Thistory[cnttr[accidx1]].Tdate.day=today.day;
    account[accidx1].Thistory[cnttr[accidx1]].Tdate.month=today.month;
    account[accidx1].Thistory[cnttr[accidx1]].Tdate.year=today.year;

    account[accidx1].Thistory[cnttr[accidx1]].Tamount=amount;
    account[accidx1].Thistory[cnttr[accidx1]].Ttype=2;
    strcpy(account[accidx1].Thistory[cnttr[accidx1]].Tdescription,"TRANSFER");
    cnttr[accidx1]++;



    account[accidx2].Thistory[cnttr[accidx2]].TID=5000+cnttr[accidx2];
    account[accidx2].Thistory[cnttr[accidx2]].Tdate.day=today.day;
    account[accidx2].Thistory[cnttr[accidx2]].Tdate.month=today.month;
    account[accidx2].Thistory[cnttr[accidx2]].Tdate.year=today.year;
    account[accidx2].Thistory[cnttr[accidx2]].Tamount=amount;
    account[accidx2].Thistory[cnttr[accidx2]].Ttype=2;
    strcpy(account[accidx2].Thistory[cnttr[accidx2]].Tdescription,"GETTING");
    cnttr[accidx2]++;

    printf("\nYour money is successfully transfered.\n");
    printf("Your current account balance is %d.\n",account[accidx1].balance);
    printf("Press any key to go back main menu.");
    getch();
}

int main()
{
    int i,j;
    SYSTEMTIME t;
    GetSystemTime(&t);
    today.day=t.wDay;
    today.month=t.wMonth;
    today.year=t.wYear;

    char *filename="Bank account details.txt";
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        perror("FILE does not open.");
        exit(1);
    }
    fscanf(fp,"%d\n",&count);
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%d\n",&cnttr[i]);
    }
    for(i=0;i<count;i++)
    {
        fscanf(fp,"%d\t%s\t%d\t%d-%d-%d\n",&account[i].AccountNo,account[i].AccountName,&account[i].balance,&account[i].AccOpenDate.day,&account[i].AccOpenDate.month,&account[i].AccOpenDate.year);
        for(j=0;j<cnttr[i];j++)
        {
            fscanf(fp,"%d\t%d\t%d\t%s\t%d-%d-%d\n",&account[i].Thistory[j].TID,&account[i].Thistory[j].Ttype,&account[i].Thistory[j].Tamount,account[i].Thistory[j].Tdescription,&account[i].Thistory[j].Tdate.day,&account[i].Thistory[j].Tdate.month,&account[i].Thistory[j].Tdate.year);
        }
    }
    fclose(fp);
    do{
        menu();
        switch(choose)
        {
            case 0:openaccount();
                break;
            case 1:depositemoney();
                break;
            case 2:withdrawmoney();
                break;
            case 3:showthistory();
                break;
            case 4:showaccbalan();
                break;
            case 5:transfermoney();
                break;
        }

    }while(choose!=6);

    fp=fopen(filename,"w+");
    if(fp==NULL)
    {
        perror("FILE does not open.");
        exit(1);
    }

    fprintf(fp,"%d\n",count);
    for(i=0;i<10;i++)
    {
        fprintf(fp,"%d\n",cnttr[i]);
    }

    for(i=0;i<count;i++)
    {
        fprintf(fp,"%d\t%s\t%d\t%d-%d-%d\n",account[i].AccountNo,account[i].AccountName,account[i].balance,account[i].AccOpenDate.day,account[i].AccOpenDate.month,account[i].AccOpenDate.year);
        for(j=0;j<cnttr[i];j++)
        {
            fprintf(fp,"%d\t%d\t%d\t%s\t%d-%d-%d\n",account[i].Thistory[j].TID,account[i].Thistory[j].Ttype,account[i].Thistory[j].Tamount,account[i].Thistory[j].Tdescription,account[i].Thistory[j].Tdate.day,account[i].Thistory[j].Tdate.month,account[i].Thistory[j].Tdate.year);
        }
    }
    fclose(fp);

    return 0;
}
