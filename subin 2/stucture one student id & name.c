/*We cannot use assignment operator in a character Array.*/

#include<stdio.h>
int main()
{
    struct stduent{
        int id;
        char *name;
    };

    struct stduent one;

    one.id=1;
    one.name="Tahmid Rafi";

    printf("ID: %d\n",one.id);
    printf("Name: %s",one.name);

    return 0;
}
