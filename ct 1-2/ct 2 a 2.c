#include<stdio.h>
int main()
{
    int dept,cost,i=1;
    scanf("%d",&dept);
    while(scanf("%d",&cost)&&cost>=0)
    {
        dept=dept-cost;
        printf("Day %d: Cost- %d, Remaining Balance- %d\n",i,cost,dept);
        i++;
    }
    return 0;
}
