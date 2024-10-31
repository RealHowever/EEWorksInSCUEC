#include <stdio.h>
#include <math.h>

int main()
{
    float a,x,y;
    scanf("a=%f,x=%f",&a,&x);
    if(x==a || x==-a)
    {
        y = 0;
    }
    else if(x>-a && x<a)
    {
        y = sqrt ( powf(a,2) - powf(x,2) );
    }
    else
    {
        y=x;
    }
    printf("a=%.2f,x=%.2f,y=%.2f",a,x,y);
    return 0;
}