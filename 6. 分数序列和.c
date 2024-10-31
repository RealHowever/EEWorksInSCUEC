#include <stdio.h>

int main()
{
    float denominator=1,molecule=1,old_denominator=1,n,i,result=0;
    scanf("%f",&n);
    for(i=1;i<=n;)
    {
        molecule = molecule + old_denominator;
        old_denominator = denominator;
        result = molecule / old_denominator + result;
        denominator = molecule;
        i++;
    }
    printf("%.4f",result);
    return 0;
}