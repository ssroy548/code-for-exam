#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float x[10],y[10],sum=0,h,temp,a,b;
  int i,n,j,k=0;
  float fact(int);
  printf("Input number of data points\n");
  scanf("%d",&n);
  printf("Input table values,set by set\n");
  for(i=0; i<n; i++)
  {
   scanf("%f %f",&x[i],&y[i]);
  }
  printf("Initial value of x\n");
  scanf("%f",&a);
  printf("Final value of x\n");
  scanf("%f",&b);
  printf("What is the segment width\n");
  scanf("%f",&h);
  //h=x[1]-x[0];
  n=n-1;
  sum = sum + y[0];
  for(i=1;i<n;i++)
  {
    if(k==0)
    {
     sum = sum + 4 * y[i];
     k=1;
    }
    else
    {
     sum = sum + 2 * y[i];
     k=0;
    }
   }
   sum = sum + y[i];
   sum = sum * (h/3);
   printf("Integral from %0.4f to %0.4f is %f\n",a,b,sum);
}
