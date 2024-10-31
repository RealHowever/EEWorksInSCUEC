#include <stdio.h>
#define PI 3.141593

int main()
{
    double r = 0,area = 0,perim = 0;
    scanf("%lf",&r);
    area = PI * r *r;
    perim = 2 * PI * r;
    printf("area:%.4lf,perim:%.4lf",area,perim);
    return 0;
}