#include<stdio.h>
int main()
{
    int n,m,a;
    char x;
    scanf("%d",&n);
    while(scanf(" %c %d",&x,&m)==2){
    getchar();
        if(x=='+'){
        n=m+n;
        printf("%d\n",n);}
        else if(x=='-'){
            n=n-m;
            printf("%d\n",n);
        }
        else if(x=='*'){
            n=n*m;
            printf("%d\n",n);}
        else if(x=='/'){
            n=n/m;
            printf("%d\n",n);
        }
    }
    return 0;
}
