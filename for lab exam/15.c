#include<stdio.h>
#include<math.h>
#define pi 3.14159265
int main()
{
    double a,b,c;
    scanf("%lf",&a);
    b=pi/180;
    c=sin(a*b);
    printf("%lf\n",c);
    return 0;
}
