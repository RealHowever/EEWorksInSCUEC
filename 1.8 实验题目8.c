#include <stdio.h>
#include <math.h>

int main()
{
    float A[2],B[2],dist;
    scanf("%f %f\n%f %f",&A[0],&A[1],&B[0],&B[1]);
    dist = sqrt(powf((A[0] - B[0]),2) + powf((A[1] - B[1]),2));
    printf("%.4f",dist);
    return 0;
}
