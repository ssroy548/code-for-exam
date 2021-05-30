#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    if(a<20){
        while(scanf("%d",&b)&&b>10)
        if(a-b>5||b-a>5){
            c++;
        }
        printf("%d\n",c);
    }
    else{
        printf("Invalid number\n");
    }
    return 0;
}
