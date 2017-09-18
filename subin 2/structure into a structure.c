#include<stdio.h>
#include<string.h>
int main()
{
    struct nametype{
        char first[20];
        char last[20];
    };

    struct student{
        int id;
        struct nametype name;
    };

    struct student one;

    printf("Enter student id: ");
    scanf("%d",&one.id);
    printf("Enter first name: ");
    scanf("%s",one.name.first);
    printf("Enter last name: ");
    scanf("%s",one.name.last);


    printf("\nId: %d\n",one.id);
    printf("%s %s",one.name.first,one.name.last);

    return 0;
}
