#include<stdio.h>
#include<string.h>
int main()
{
    char l[100];
    int i;
    gets(l);
    printf("the string is %s\n",l);
    for(i=0;i<=strlen(l);i++){
        if(l[i]>=65&&l[i]<=90)
            l[i]=l[i]+32;
    }
    printf("the string in upper case ->%s",l);
    return 0;
}
