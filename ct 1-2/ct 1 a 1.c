#include<stdio.h>
int main()
{
    int n;
    float a;
    printf("how many pill u have? ");
    scanf("%d",&n);
    if(n%2==0&&n>0){
        a=n/2-.5;}
    else{
        a=n/2;}
    printf("it will takes %.1f hour\n",a);
    return 0;
}
