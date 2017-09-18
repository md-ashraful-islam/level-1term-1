#include<stdio.h>
#include<string.h>

typedef struct{
    char first[20];
    char last[20];
}nametype;

typedef struct{
    int id;
    nametype name;
    char grade[3];
}studenttype;

void calculategrade(studenttype *s,int marks)
{
    if(marks>79)
        strcpy((*s).grade,"A+");
    else if(marks>69)
        strcpy((*s).grade,"A");
    else if(marks>59)
        strcpy((*s).grade,"A-");
    else if(marks>49)
        strcpy((*s).grade,"B");
    else if(marks>39)
        strcpy((*s).grade,"C");
    else if(marks>32)
        strcpy((*s).grade,"D");
    else
        strcpy((*s).grade,"F");
}
studenttype student[3];
int main()
{

    int i,n=3;
    int marks[3]={70,85,10};
    for(i=0;i<n;i++)
    {
        printf("Enter the id for Student %d: ",i+1);
        scanf("%d",&student[i].id);
        printf("Enter the first name for the student %d: ",i+1);
        scanf("%s",student[i].name.first);
        printf("Enter the last name for the student %d: ",i+1);
        scanf("%s",student[i].name.last);
        strcpy(student[i].grade,"");
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        calculategrade(&student[i],marks[i]);
    }

    printf("Output:\n\n\n");

    for(i=0;i<n;i++)
    {
        printf("ID: %d\n",student[i].id);
        printf("Name: %s %s\n",student[i].name.first,student[i].name.last);
        printf("Grade: %s\n",student[i].grade);
        printf("\n");
    }
    return 0;
}
