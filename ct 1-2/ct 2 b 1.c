#include<stdio.h>
int main()
{
    int t,dd,mm,yy,time,i=0,small=1000000000,mmry;
    scanf("%d",&t);
    char name[20][20],c;
    while(i<t)
    {
        scanf("%s",name[i]);            //careful just 1st name
        scanf("%d%c%d%c%d",&dd,&c,&mm,&c,&yy);
        time=yy*10000+mm*100+dd;
        if(time<small)
        {
            small=time;
            mmry=i;
        }
        i++;
    }
    printf("%s\n",name[mmry]);
    return 0;
}
