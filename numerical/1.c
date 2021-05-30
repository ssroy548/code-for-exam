#include<stdio.h>
int main()
{
    double x,y=1,i,sum=1;
    int limit;
    printf("Value of x: ");
    scanf("%lf",&x);
    for(i=1;i<2;i++)
        {
        y=(y*x)/i;
        sum=sum+y;
    }
    printf("e^x = %0.4lf\n",sum);
    return 0;
}

