#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=1;
	double min,max,h,f1,f2,sum=0;
	scanf("%lf,%lf,%d",&min,&max,&n);
	h = (max - min)/n;
	for(;i<=n;)
	{
		f1 = 2*powf(min+(i-1)*h,5)+5*powf(min+(i-1)*h,3);
		f2 = 2*powf(min+i*h,5)+5*powf(min+i*h,3);
		sum = (f1+f2)*h/2.0 + sum;
		i++;
	}
	printf("%.2lf",fabs(sum));
	return 0;
}
