#include<stdio.h>

int main()
{
    int a=20,b=10,c=25,max;

    struct ADate {
        int month;
        int day;
        int year;
    };

    struct ADate *d,p;
    d=&p;
        d->month = 3;
        d->day = 9;
        d->year = 2014;
    return 0;
//    char text[80]="gjfgujyfgujfufufutfgujkslfdglksadfgafglkdsaghkjdfah";
//    printf("(1)%7s(1)\n", text);
//    printf("(2)%.7s(2)", text);
//    printf("(3)%7.2s(3)", text);
//    printf("(4)%-7.2s(4)", text);

//    char ch;
//    scanf("%c",&ch);
//    if('a'<=ch<='z')
//        ch-=32;
//    printf("%c",ch);

    if (a > b > c) max = a;
    else if (b > a > c) max = b;
    else max =c;

    printf("%d",max);

//    int n,i,s=sizeof(int)*4;
//    scanf("%d",&n);
//    if(((((unsigned) n)>>s)|(n<<s))^n)
//        printf("NO");
//    else
//        printf("YES");
//    return 0;
}
