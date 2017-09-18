#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    typedef struct
    {
        double batavg;
        char fname[24];
    }player_rate;

    player_rate player[9];

    int i,j;
    char temp[24];
    double t=0,average=0;

    for(i=0;i<9;i++)
    {
        printf("Please enter name of player %d : ",i+1);
        scanf("%s",player[i].fname);
        printf("Please enter his batting average: ");
        scanf("%lf",&player[i].batavg);
        average+=player[i].batavg;
    }

    for(i=0;i<8;i++)
    {
        for(j=i;j<9;j++)
        {
            if(player[i].batavg<player[j].batavg)
            {
                t=player[i].batavg;
                player[i].batavg=player[j].batavg;
                player[j].batavg=t;
                strcpy(temp,player[i].fname);
                strcpy(player[i].fname,player[j].fname);
                strcpy(player[j].fname,temp);
            }
        }
    }

    printf("\n\nAverage batting rate of player's is %lf\n",average/9);
    for(i=0;i<9;i++)
    {
        printf("%s\t",player[i].fname);
        printf("%lf\n",player[i].batavg);
    }

    return 0;


}
