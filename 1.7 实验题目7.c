#include <stdio.h>

int main()
{
    float r1,r2,r3,r;
    scanf("%f%f%f",&r1,&r2,&r3);
    r = (r1 * r2 * r3)/(r1 * r2 + r2 * r3 + r1 * r3);
    printf("%.6f",r);
    return 0;
}