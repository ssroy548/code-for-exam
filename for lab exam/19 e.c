#include<stdio.h>
int main()
{
    int n,i,sum=0,t=0;
    scanf("%d",&n);
    for(i=n-1;i>=1;i--){
        sum=n*i;
        t=sum+t;
    }
    printf("%d\n",t);
    return 0;
}
