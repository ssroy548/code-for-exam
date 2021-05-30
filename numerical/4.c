#include<stdio.h>
int main()
{
    int m,n,i,j;
    double x[10][10],d=0;
    printf("m = n = ");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
        scanf("%lf",&x[i][j]);
        }
    }
    printf("Matrix A:");
    for(i=0;i<m;i++){
            printf("\n");
        for(j=0;j<m;j++){
        printf("%0.0lf  ",x[i][j]);
        }
    }
    ///finding determinant
    for(i=0;i<m;i++){
        d=d+(x[0][i]*(x[1][(i+1)%3] * x[2][(i+2)%3] - x[1][(i+2)%3] * x[2][(i+1)%3]));
    }
    printf("\nThe determinant of A:\n%0.2lf\n",d);
    //finding transpose
    printf("The transpose of A:");
    for(i=0;i<m;i++){
            printf("\n");
        for(j=0;j<m;j++){
            printf("%0.0lf  ",x[j][i]);
        }
        ///printf("\n");
    }
    //finding adjoint
    printf("\nThe adjoint of A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%0.0lf  ",((x[(j+1)%3][(i+1)%3]*x[(j+2)%3][(i+2)%3])-(x[(j+1)%3][(i+2)%3]*x[(j+2)%3][(i+1)%3])));
        }
        printf("\n");
    }
    //finding inverse
    printf("The inverse of A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%0.4lf  ",((x[(j+1)%3][(i+1)%3]*x[(j+2)%3][(i+2)%3])-(x[(j+1)%3][(i+2)%3]*x[(j+2)%3][(i+1)%3]))/d);
        }
        printf("\n");
    }
    return 0;
}
