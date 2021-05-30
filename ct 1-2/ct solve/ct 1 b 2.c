#include <stdio.h>

int main()
{
	int n1, n2, res, pluS, minuS, diV, muL, moD;
	char ignoreD;
	while(scanf(" %d %c %d %c %d", &n1, &ignoreD, &n2, &ignoreD, &res)!=EOF)
	{
		pluS=n1+n2;
		minuS=n1-n2;
		muL=n1*n2;
		diV=n1/n2;
		moD=n1%n2;
		if(res==pluS)
			printf("%d + %d = %d\n", n1, n2, res );
		else if(res==minuS)
			printf("%d - %d = %d\n", n1, n2, res );
		else if(res==muL)
			printf("%d * %d = %d\n", n1, n2, res );
		else if(res==diV)
			printf("%d / %d = %d\n", n1, n2, res );
		else if(res==moD)
			printf("%d %% %d = %d\n", n1, n2, res );
		else continue;

	}
	return 0;
}
