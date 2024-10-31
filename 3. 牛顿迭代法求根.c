#include <stdio.h>
#include <math.h>

int main()
{
    double D(double x),F(double x);
    double a,d,f,z,ans;
    scanf("%lf",&a);
    d = D(a);
    f = F(a);
    z = a-f/d;
    for(;;)
    {
        d = D(z);
        f = F(z);
        z = z-f/d;
        if (round(f)==0)
        {
            ans = z;
            printf("%.2lf",ans);
            break;
        }   
    }
    return 0;
}
double D(double x)
{
    double d;
    d = 6*powf(x,2)-8*x+3;
    return d;
}
double F(double x)
{
    double f;
    f = 2*powf(x,3)-4*powf(x,2)+3*x-6;
    return f;
}