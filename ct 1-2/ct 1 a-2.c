#include<stdio.h>
int main()
{
    int a,b,c,hi,mid,lo;
    char x,y;
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);
    if(a>b){
        mid=a;
        lo=b;
    }
    else{
        mid=b;
        lo=a;
    }
    if(mid>c){
        hi=mid;
        if(lo>c){
            mid=lo;
            lo=c;
        }
        else{
            mid=c;
        }}
        else{
            hi=c;}
    printf("DAY : %d\nMONTH : %d\nYEAR : %d\n",mid,lo,hi);
    return 0;
}
