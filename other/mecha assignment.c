#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main()
{
    float mat[4][4],pmat[4][1],new_mat[4][1],angle;
    int i,j,l,axis,nooftransformations,type,dx,dy,dz;
    pmat[3][0]=1;
    memset(new_mat,0,sizeof(new_mat));
    memset(mat,0,sizeof(mat));
    printf("Enter coordinates x, y and z: ");
    scanf("%f %f %f",&pmat[0][0],&pmat[1][0],&pmat[2][0]);



    printf("Enter no. of transformations:");
    scanf("%d",&nooftransformations);


    for(l=1; l<=nooftransformations; l++)
    {

        for(i=0; i<4; i++)
            for(j=0; j<4; j++)
                mat[i][j]=0;

        for(i=0; i<4; i++)
            new_mat[i][0]=0;


        //printf("\n%.3lf %.3lf %.3lf",pmat[0][0],pmat[1][0],pmat[2][0]);
        //printf("\n");
        printf("Type 1 for Rotation or 2 for Translation: ");
        scanf("%d",&type);
        if(type==1)
        {
            printf("Type 1, 2 or 3 for rotation about x, y and z axis respectively: ");
            scanf("%d",&axis);
            printf("Enter angle of rotation: ");
            scanf("%f",&angle);
            switch(axis)
            {
            case 1:
                for(i=0; i<4; i++)
                    mat[0][i]=mat[i][0]=mat[3][i]=mat[i][3]=0;
                mat[0][0]=mat[3][3]=1;
                mat[1][1]=mat[2][2]=cos(angle*pi/180);
                mat[1][2]=-sin(angle*pi/180);
                mat[2][1]=sin(angle*pi/180);
                break;
            case 2:
                for(i=0; i<4; i++)
                    mat[3][i]=mat[i][3]=mat[1][i]=mat[i][1]=0;
                mat[1][1]=mat[3][3]=1;
                mat[0][0]=mat[2][2]=cos(angle*pi/180);
                mat[2][0]=-sin(angle*pi/180);
                mat[0][2]=sin(angle*pi/180);
                break;
            case 3:
                for(i=0; i<4; i++)
                    mat[2][i]=mat[i][2]=mat[3][i]=mat[i][3]=0;
                mat[2][2]=mat[3][3]=1;
                mat[0][0]=mat[1][1]=cos(angle*pi/180);
                mat[0][1]=-sin(angle*pi/180);
                mat[1][0]=sin(angle*pi/180);
            }

            /*for(i=0; i<4; i++)
            {
                printf("\n");
                for(j=0; j<4; j++)
                    printf("%f ",mat[i][j]);
            }*/


            for(i=0; i<4; i++)
                for(j=0; j<4; j++)
                    new_mat[i][0]+=mat[i][j]*pmat[j][0];
        }
        else if(type==2)
        {
            printf("Enter dx, dy and dz: ");
            scanf("%d %d %d",&dx,&dy,&dz);
            for(i=0; i<4; i++)mat[i][i]=1;
            mat[0][3]=(double)dx,mat[1][3]=(double)dy,mat[2][3]=(double)dz;

            /*for(i=0; i<4; i++)
            {
                printf("\n");
                for(j=0; j<4; j++)
                    printf("%f ",mat[i][j]);
            }*/

            for(i=0; i<4; i++)
                for(j=0; j<4; j++)
                    new_mat[i][0]+=mat[i][j]*pmat[j][0];
        }

        for(i=0; i<4; i++)
            pmat[i][0]=new_mat[i][0];


        //printf("\n%.3f %.3f %.3f",pmat[0][0],pmat[1][0],pmat[2][0]);

    }

    printf("The final point is: ");
    printf("\n%.3lf %.3lf %.3lf",new_mat[0][0],new_mat[1][0],new_mat[2][0]);

}

