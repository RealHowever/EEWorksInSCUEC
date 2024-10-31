#include <stdio.h>
#include <math.h>

int main()
{
	float A[2],B[2],C[2],s,area,L1,L2,L3; 
    scanf("%f %f%f %f%f %f",&A[0],&A[1],&B[0],&B[1],&C[0],&C[1]);
    L1 = sqrt(powf(A[0]-B[0],2)+powf(A[1]-B[1],2));
    L2 = sqrt(powf(B[0]-C[0],2)+powf(B[1]-C[1],2));
    L3 = sqrt(powf(A[0]-C[0],2)+powf(A[1]-C[1],2));
    if (L1+L2>L3 && L1+L3>L2 && L2+L3>L1)
    {
        s = (L1 + L2 + L3)/2.0;
       area = sqrt(s*(s - L1)*(s -L2)*(s - L3));
       printf("Yes,perimeter:%.3f,area:%.3f",L1+L2+L3,area);
    }
    else printf("No,cannot form a triangle!");
    return 0;
}
