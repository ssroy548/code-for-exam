#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x=0,root;
    scanf("%d",&n);
    root=sqrt(n);
    for(i=2;i<=root;i++){
        if(n%i==0){
            x++;
            break;
        }
    }
    if(x==0)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
