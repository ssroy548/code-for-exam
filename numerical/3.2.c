///upper triangle
#include<stdio.h>
int main()
{
    int m,n,i,j;
    double x[10][10];
    printf("Number of columns(m)= ");
    scanf("%d",&m);
    printf("Number of rows(n)= ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%lf",&x[i][j]);
        }
    }
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
                if(i>j){
                    x[i][j]=0;
                }
            printf("%0.0lf  ",x[i][j]);
        }
    }
    return 0;
}

