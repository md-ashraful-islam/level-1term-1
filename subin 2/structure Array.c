#include<stdio.h>
#include<string.h>

struct nametype{
    char first[20];
    char last[20];
};

struct studenttype {
    int id;
    struct nametype name;
};

int main()
{
    struct studenttype student[5];
    int i,n=5;
    for(i=0;i<5;i++)
    {
        printf("Enter the id for student %d: ",i+1);
        scanf("%d",&student[i].id);

        printf("Enter the first name of the student %d: ",i+1);
        scanf("%s",student[i].name.first);

        printf("Enter the last name of the student %d: ",i+1);
        scanf("%s",student[i].name.last);

        printf("\n");
    }

    printf("Output: \n\n\n");

    for(i=0;i<n;i++)
    {
        printf("Id: %d\n",student[i].id);
        printf("Name: %s %s\n\n",student[i].name.first,student[i].name.last);
    }
    return 0;

}
