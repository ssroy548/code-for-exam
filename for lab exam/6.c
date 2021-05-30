#include<stdio.h>
int main()
{
    int num,sum=0,r;
    printf("enter a number ");
    scanf("%d",&num);
    while(num){
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("%d\n",sum);
    return 0;
}
