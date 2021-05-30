#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x-2*x-5;
}
float df(float x)
{
    return x*x*3-2;
}
int main()
{
    int i, m;
    float h, x0, x1, a;
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &a, &m);
    for (i=1; i<=m; i++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %d, x = %f\n", i, x1);
        if (fabs(h) < a)
        {
            printf("After %d iterations, root = %f\n", i, x1);
            return 0;
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 1;
}
