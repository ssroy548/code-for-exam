//u can keep it in min...here i keep it in hour.i think min is more efficient
#include<stdio.h>
int main()
{
    int n;
    float a;
    printf("how many pill u have? ");
    scanf("%d",&n);
    if(n%2==0)
        a=n/2-.5;
    else
        a=n/2;
    printf("it will takes %.1f hour\n",a);
    return 0;
}
