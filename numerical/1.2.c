#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,sum=0;
    int i;
    printf("Value of x: ");
    scanf("%lf",&x);
    for(i=1;i<=5;i++)
        {
        sum=pow((-1),(i+1))* pow ((x,i)/2);
    }
    printf("log(1+x) = %0.4lf\n",sum);
    return 0;
}

