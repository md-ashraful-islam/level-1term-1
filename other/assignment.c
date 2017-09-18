#include<stdio.h>
#include<math.h>
int main()
{
    char transtype,transaxis;
    float p0[4],pi=3.1416,angle,p[4]={0};
    printf("Please enter the position before transformation(x,y,z)= ");
    scanf("%f%f%f",&p0[0],&p0[1],&p0[2]);
    p0[3]=1;
    int n,i,j,k;
    printf("Please enter the number of transformation: ");
    scanf("%d",&n);
    float mat[n][4][4];

    for(i=0;i<n;i++)
        for(j=0;j<4;j++)
            for(k=0;k<4;k++)
                mat[i][j][k]=0;

    for(i=0;i<n;i++)
    {
        printf("Please enter transformation type(R for rotation & T for translation): ");
        scanf(" %c",&transtype);

        if(transtype=='R' || transtype=='r')
        {
            printf("Enter the rotation axis(like x or y or z): ");
            scanf(" %c",&transaxis);
            printf("Enter the angle(in degree) of rotation: ");
            scanf("%f",&angle);
            if(transaxis=='x' || transaxis=='X')
            {
                mat[i][0][0]=1;
                mat[i][1][1]=cos((angle*pi)/180);
                mat[i][1][2]=-sin((angle*pi)/180);
                mat[i][2][1]=sin((angle*pi)/180);
                mat[i][2][2]=cos((angle*pi)/180);
                mat[i][3][3]=1;
            }
            else if(transaxis=='y' || transaxis=='Y')
            {
                mat[i][0][0]=cos((angle*pi)/180);
                mat[i][0][2]=sin((angle*pi)/180);
                mat[i][2][0]=-sin((angle*pi)/180);
                mat[i][2][2]=cos((angle*pi)/180);
                mat[i][1][1]=1;
                mat[i][3][3]=1;
            }
            else if(transaxis=='z' || transaxis=='Z')
            {
                mat[i][0][0]=cos((angle*pi)/180);
                mat[i][0][1]=-sin((angle*pi)/180);
                mat[i][1][0]=sin((angle*pi)/180);
                mat[i][1][1]=cos((angle*pi)/180);
                mat[i][2][2]=1;
                mat[i][3][3]=1;
            }
            else
            {
                printf("!!!You enter wrong axis.");
                return 1;
            }
        }
        else if(transtype=='T' || transtype=='t')
        {
            printf("Please enter dx,dy,dz: ");
            scanf("%f%f%f",&mat[i][0][3],&mat[i][1][3],&mat[i][2][3]);
            mat[i][3][3]=1;
            mat[i][0][0]=1;
            mat[i][1][1]=1;
            mat[i][2][2]=1;
        }
        else
        {
            printf("!!!You enter wrong type of transformation.");
            return 2;
        }
    }

    for(i=0;i<n;i++)
    {
        p[0]=mat[i][0][0]*p0[0]+mat[i][0][1]*p0[1]+mat[i][0][2]*p0[2]+mat[i][0][3]*p0[3];
        p[1]=mat[i][1][0]*p0[0]+mat[i][1][1]*p0[1]+mat[i][1][2]*p0[2]+mat[i][1][3]*p0[3];
        p[2]=mat[i][2][0]*p0[0]+mat[i][2][1]*p0[1]+mat[i][2][2]*p0[2]+mat[i][2][3]*p0[3];
        p[3]=mat[i][3][0]*p0[0]+mat[i][3][1]*p0[1]+mat[i][3][2]*p0[2]+mat[i][3][3]*p0[3];
        for(j=0;j<4;j++)
            p0[j]=p[j];

    }

    printf("\n\n\nFinal position after transformation is (%.2f ,%.2f ,%.2f )\n\n",p[0],p[1],p[2]);

    return 0;
}
