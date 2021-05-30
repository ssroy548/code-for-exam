#include <stdio.h>
int main()
{
int prev,n,cur,i;
scanf("%d",&n);
scanf("%d",&prev);
for(i=1;i<n;i++){
scanf("%d",&cur);
if(i%4==1){
prev=cur+prev;
}
else if(i%4==2){
prev=prev-cur;
}
else if(i%4==3){
prev=prev*cur;
}
else if(i%4==0){
prev=prev/cur;
}
}
printf("%lf",(double)prev);
return 0;
}
/*
#include <stdio.h>

int main()
{
    int n,op=1,result=0,N,f=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&N);

        if(!f)
        {
            switch(op)
            {
            case 1:
                result += N;
                break;
            case 2:
                result -= N;
                break;
            case 3:
                result *= N;
                break;
            case 4:
                result /= N;
                break;
            default:
                continue;
            }
            op++;
            if(op==5) op=1;
        }
        else
        {
            f=0;
            result=N;
        }
    }
    printf("%d\n", result);
    return 0;
}
*/
