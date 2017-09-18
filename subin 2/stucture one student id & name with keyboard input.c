#include<stdio.h>
#include<string.h>
int main()
{
    struct student {
        int id;
        char name[40];
    };

    struct student one;

    printf("Enter student id: ");
    scanf("%d",&one.id);
    printf("Enter student name: ");
    scanf(" %[^\n]",one.name);

    printf("ID: %d\n",one.id);
    printf("Name: %s",one.name);

    return 0;
}
