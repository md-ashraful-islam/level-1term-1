#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int choice;
int check_sorted(int ara[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(ara[i]>ara[i+1])
            return 0;
    }
    return 1;
}
void menu()
{
    printf("\n\n\n\tChoose\n\t  1 for Read Array.\n\t  2 for Print Array.\n\t  3 for Sort Array Ascendingly.\n\t  4 for Insert.\n\t  5 for Insert at the end.\n\t  6 for Delete.\n\t  7 for Search.\n\t  8 for Exit.\n");
    printf("\tEnter your option: ");
    scanf("%d",&choice);
}
int main()
{
    int cho;
    int n,i,ara[100],j,temp,count=0,a,sortflag;
    menu();

    while(choice>2 && choice<8)
    {
        system("cls");
        printf("\n\n\n\n\tThere is no array.\n\tPlease Read Array first.");
        printf("\n\tPress any key to go back menu.");
        getch();
        system("cls");
        menu();
    }
    while(1)
    {
        switch(choice)
        {
            case 1:
                system("cls");
                printf("Enter the number of element of the Array: ");
                scanf("%d",&n);
                while(n<=0)
                {
                    printf("You enter wrong number.\nPlease enter right number: ");
                    scanf("%d",&n);
                }
                printf("\n\n");
                for(i=0;i<n;i++)
                {
                    printf("Enter %dth element: ",i+1);
                    scanf("%d",&ara[i]);
                }
                sortflag=check_sorted(ara,n);
                printf("Press any key to go back menu.");
                getch();
                system("cls");
                menu();
                break;
            case 2:
                system("cls");
                for(i=0;i<n+count;i++)
                {
                    printf("%d\t",ara[i]);
                }
                printf("\nPress any key to go back menu.");
                getch();
                system("cls");
                menu();
                break;
            case 3:
                system("cls");
                if(sortflag==1)
                {
                    printf("Your Array is already sorted.\nPress any key to go back menu.");
                }
                else
                {
                    for(i=0;i<n-1+count;i++)
                    {
                        for(j=i+1;j<n+count;j++)
                        {
                            if(ara[i]>ara[j])
                            {
                                temp=ara[j];
                                ara[j]=ara[i];
                                ara[i]=temp;
                            }
                        }
                    }
                    printf("Your Array is sorted.\nPress any key to go back menu.");
                }
                sortflag=1;
                getch();
                system("cls");
                menu();
                break;
            case 4:
                system("cls");
                printf("\n\n\tChoose your Array type: \n\t  1 for Sorted Array.\n\t  2 for Unsorted Array.\n\t  3 for go back to menu");
                printf("\n\tEnter your choice: ");
                while(1)
                {
                    scanf("%d",&cho);
                    if(cho==1 && sortflag==0)
                    {
                        printf("\n\tPlease enter right choice becauce your Array is not sorted: ");
                    }
                    else if(cho==2 && sortflag==1)
                    {
                        printf("\n\tYour Array is sorted.\n\tPlease enter right choice: ");
                    }
                    else
                        break;
                }
                while(cho<0 || cho>4)
                {
                    printf("\n\tPlease enter your choice rightly: ");
                    scanf("%d",&cho);
                }
                if(cho==1)
                {
                    printf("\n\tEnter new element: ");
                    int value;
                    scanf("%d",&value);
                    for(i=0;i<=n+count;i++)
                    {
                        if(ara[i]>value)
                        {
                            for(j=n+count-1;j>=i;j--)
                            {
                                ara[j+1]=ara[j];
                            }
                            ara[i]=value;
                            break;
                        }
                    }
                    sortflag=1;
                    count++;
                }
                else if(cho==2)
                {
                    printf("\n\tEnter new element: ");
                    scanf("%d",&ara[n+count]);
                    for(i=0;i<=n+count-1;i++)
                    {
                        for(j=i+1;j<=n+count;j++)
                        {
                            if(ara[i]>ara[j])
                            {
                                temp=ara[j];
                                ara[j]=ara[i];
                                ara[i]=temp;
                            }
                        }
                    }
                    sortflag=1;
                    count++;
                }
                else if(cho==3)
                {
                    system("cls");
                    menu();
                }
                printf("\n\tPress any key to go back menu.");
                getch();
                system("cls");
                menu();
                break;
            case 5:
                system("cls");
                printf("Enter new element: ");
                scanf("%d",&ara[n+count]);
                count++;
                printf("\nYour data is Inserted.\nPress any key to go back menu.");
                getch();
                system("cls");
                menu();
                break;
            case 6:
                system("cls");
                printf("\n\n\tChoose which way you want to delete data\n\t  1 for Using its position.\n\t  2 for Using it's value.\n\t  3 for go back to menu.");
                printf("\n\tEnter your choice: ");
                scanf("%d",&cho);
                while(cho<0 || cho>4)
                {
                    printf("\n\tPlease enter your choice rightly: ");
                    scanf("%d",&cho);
                }
                if(cho==1)
                {
                    system("cls");
                    printf("Enter the position: ");
                    scanf("%d",&a);
                    while(a<0 || a>=n+count)
                    {
                        printf("\nPlease enter the position rightly: ");
                        scanf("%d",&a);
                    }
                    for(i=a;i<n+count;i++)
                    {
                        ara[i]=ara[i+1];
                    }
                    count--;
                }
                else if(cho==2)
                {
                    system("cls");
                    printf("Enter the element: ");
                    scanf("%d",&a);
                    for(i=0;i<n+count;i++)
                    {
                        if(ara[i]==a)
                        {
                            for(j=i;j<n+count-1;i++)
                            {
                                ara[j]=ara[j+1];
                            }
                            printf("\n%d is deleted.",a);
                            count--;
                            break;
                        }
                    }
                    if(i==n+count)
                    {
                        printf("\nThe number %d do not find in Array.",a);
                    }
                }
                else if(cho==3)
                {
                    system("cls");
                    menu();
                }
                printf("\nPress any key to go back menu.");
                getch();
                system("cls");
                menu();
                break;
            case 7:
                system("cls");
                int p=0;
                printf("Enter your number: ");
                scanf("%d",&a);
                for(i=0;i<n+count-1;i++)
                {
                    if(ara[i]==a)
                    {
                        printf("Found %d in %dth element of the Array.\n",a,i+1);
                        p++;
                    }

                }
                if(p==0)
                    printf("\n%d is Not found  in the Array.",a);
                printf("\nPress any key to go back menu.");
                getch();
                system("cls");
                menu();
                break;
            case 8:
                return 0;
            default:
                system("cls");
                printf("Your choice is not correct.\nPress any key to go back to menu.");
                getch();
                system("cls");
                menu();
        }
    }
}
