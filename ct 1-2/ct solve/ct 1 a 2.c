//#include<stdio.h>
/*int main()
{
    int a,b,c,hi,mid,lo;
    char x,y;
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);now i m going to using sort system. it's very important to all for compare 3 number.
    ata sobai valo kora jana rakis. ata tha akto bag acha. sir ar question ar dika bcz ami akhan a sodo sort korchi..
    akon toi 50 60 100 input dila
    o output show korba.but day month year sob kecho ar akta limitation acha.so need a efficient code.
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
}*/

//ata efficient sir jamon chaicha

#include <stdio.h>

int main()
{
	int i, a, b, c;
	char ignoreD;
	while(scanf(" %d %c %d %c %d", &a, &ignoreD, &b, &ignoreD, &c)!=EOF)
	{
		for(i=15; i<=31; i++)
		{
			if(i==a){
				printf("%d\n", a);
				break;
			}
			else if(i==b){
				printf("%d\n", b);
				break;
			}
			else if(i==c){
				printf("%d\n", c);
				break;
			}
			else continue;
		}
	}
	return 0;
}
