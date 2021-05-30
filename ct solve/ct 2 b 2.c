//from sakib
#include<stdio.h>
int main()
{
    int i,nc,ns,s,np[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char sp[25];
    scanf("%d%d",&nc,&ns);
    for(i=1;i<=nc;i++){
        printf("class %d\n",i);
        for(s=1;s<=ns;s++){
            printf("student %d:",s);
            scanf(" %c",&sp[s]);
            if(sp[s]=='p'){
                np[s]=np[s]+1;
            }
        }
    }
    for(i=1;i<=ns;i++){
        printf("Student %d: Total Present %d\n",i,np[i]);

    }
}
