#include<stdio.h>
#include<stdlib.h>
/*
British pound: 0.65 pound per U.S. dollar
Canadian dollar: 1.4 dollars per U.S. dollar
Dutch guilder: 1.7 guilders per U.S. dollar
French franc: 5.3 francs per U.S. dollar
German mark: 1.5 marks per U.S. dollar
Italian lira: 1570 lira per U.S. dollar
Japanese yen: 98 yen per U.S. dollar
Mexican peso: 3.4 pesos per U.S. dollar
Swiss franc: 1.3 francs per U.S. dollar*/

float ara[9]={.65,1.4,1.7,5.3,1.5,1570,98,3.4,1.3};

void menu()
{
    printf("\n\n\n\n\tPRESS: \n\n");
    printf("\t\t'B' for British pound\n");
    printf("\t\t'C' for Canadian dollar\n");
    printf("\t\t'D' for Dutch guilder\n");
    printf("\t\t'F' for French franc\n");
    printf("\t\t'G' for German mark\n");
    printf("\t\t'I' for Italian lira\n");
    printf("\t\t'J' for Japanese yen\n");
    printf("\t\t'M' for Mexican peso\n");
    printf("\t\t'S' for Swiss franc\n\n");
    printf("\t\t'0' for EXIT\n\n");

    return ;
}

int determinemoney(char c)
{
    if(c>='a' && c<='z')
        c-=32;
    switch(c)
    {
        case 'B':return 0;
        case 'C':return 1;
        case 'D':return 2;
        case 'F':return 3;
        case 'G':return 4;
        case 'I':return 5;
        case 'J':return 6;
        case 'M':return 7;
        case 'S':return 8;
    }
}

int main()
{
    float result,f;
    char c1,c2;
    menu();
    while(1)
    {
        printf("\tFROM: ");
        scanf(" %c",&c1);
        if(c1=='0')
            return 0;

        printf("\tTO: ");
        scanf(" %c",&c2);
        printf("\n\tEnter price: ");
        scanf("%f",&f);

        result=f*(ara[determinemoney(c1)]/ara[determinemoney(c2)]);
        printf("\t%f\n",result);
        printf("\tPlease enter a key to continue...");
        getch();
        printf("\n\n");
    }

}
