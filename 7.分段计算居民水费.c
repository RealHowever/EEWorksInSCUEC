#include <stdio.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x==0)y=0;
	if(x>0&&x<=15)y=4*x/3.0;
	if(x>15)y=5.0/2.0*x-17.5;
	printf("%.2f",y);
	return 0;
}
