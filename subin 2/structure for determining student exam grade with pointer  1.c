#include<stdio.h>

typedef struct{
    char first[20],last[20];
}nametype;

typedef struct
{
    char grade[3];
    int id;
    nametype name;
}studenttype;

void calculate_grade(studenttype *s,int marks)
{
    if(marks>100)
        strcpy(s->grade,"ERR");
    else if(marks>79)
        strcpy(s->grade,"A+");
    else if(marks>69)
        strcpy(s->grade,"A");
    else if(marks>59)
        strcpy(s->grade,"A-");
    else if(marks>49)
        strcpy(s->grade,"B");
    else if(marks>39)
        strcpy(s->grade,"C");
    else if(marks>33)
        strcpy(s->grade,"D");
    else
        strcpy(s->grade,"F");
}

int main()
{
    studenttype student[3];
    int mark[3],i;

    for(i=0;i<3;i++)
    {
        printf("Enter the id for student %d: ",i+1);
        scanf("%d",&student[i].id);
        printf("Enter the first name for student %d: ",i+1);
        scanf("%s",student[i].name.first);
        printf("Enter the last name for student %d: ",i+1);
        scanf("%s",student[i].name.last);
        printf("Enter the mark for student %d: ",i+1);
        scanf("%d",&mark[i]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        calculate_grade(&student[i],mark[i]);
    }

    printf("OUTPUT:\n\n\n");

    for(i=0;i<3;i++)
    {
        printf("ID: %d\n",student[i].id);
        printf("NAME: %s %s\n",student[i].name.first,student[i].name.first);
        printf("GRADE: %s\n\n",student[i].grade);
    }
    return 0;
}
