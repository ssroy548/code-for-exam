//from rakib
#include<stdio.h>
int main()
{
    int a,b,c,k,l,r,max=0,i,g,d,min=99999999,e,f,w;
    char n,m,p,q,o,t;
    scanf("%d",&g);
    for(i=1;i<=g;i++){
        scanf("%d %c %d %c %d",&a,&n,&b,&m,&c);
        if(a>15){
            d=a+(b*30)+(c*365);
        }
        else{
            d=b+(a*30)+(c*365);
        }
        if(d>max){
            max=d;
            k=a;
            p=n;
            l=b;
            q=m;
            r=c;
        }
    if(d<min){
        min=d;
        e=a;
        o=n;
        f=b;
        t=m;
        w=c;
    }
    }
    printf("Maximum Date: %d%c%d%c%d\n",k,p,l,q,r);
    printf("Oldest Date: %d%c%d%c%d\n",e,o,f,t,w);
    return 0;
}
