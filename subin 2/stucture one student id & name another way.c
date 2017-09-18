
/*We cannot use assignment operator in a character Array.*/

#include<stdio.h>
#include<string.h>

int main()
{
    struct stduent{
        int id;
        char name[40];
    };

    struct stduent one;

    one.id=1;
    strcpy(one.name,"Tahmid rafi");

    printf("ID: %d\n",one.id);
    printf("Name: %s",one.name);

    return 0;
}
