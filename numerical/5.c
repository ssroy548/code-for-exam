#include<stdio.h>
int main()
{
    int i,j,n;
    double m[10][10],x,y,z,temp,temp1;
    printf("What is the size of the system ?\n");
    scanf("%d",&n);
    printf("Input coefficients  a(i , j), row-wise:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%lf",&m[i][j]);
        }
    }
    printf("Input vector  b:\n");
    for(i=0,j=n;i<n;i++){
        scanf("%lf",&m[i][j]);
    }
    temp=m[1][0]/m[0][0];
    temp1=m[2][0]/m[0][0];
    for(i=0,j=0;j<n+1;j++){
        m[i+1][j]= m[i+1][j]-( m[i][j]*temp);
        m[i+2][j]= m[i+2][j]-( m[i][j]*temp1);
    }
    temp=m[2][1]/m[1][1];
    for(i=1,j=0;j<n+1;j++){
        m[i+1][j]= m[i+1][j]-( m[i][j]*temp);
    }
    z=m[2][3]/m[2][2];
    y=(m[1][3]-m[1][2]*z)/m[1][1];
    x=(m[0][3]-m[0][2]*z-m[0][1]*y)/m[0][0];
    printf("Solution vector x:\n");
    printf("%0.4lf  %0.4lf  %0.4lf\n",x,y,z);
return 0;
}
