#include <stdio.h>
#include <math.h>

int In_Or_Out(float x,float y)
{
    float a,b,c,d;
    int h;
    a = sqrt( powf(x-2,2) + powf(y-2,2) );
    b = sqrt( powf(x+2,2) + powf(y-2,2) );
    c = sqrt( powf(x-2,2) + powf(y+2,2) );
    d = sqrt( powf(x+2,2) + powf(y+2,2) );
    if(a<=1 || b<=1 || c<=1 || d<=1) h=10;
    else h=0;
    return h;
}
int main()
{
    float Coordinate[3];
    scanf("%f,%f",&Coordinate[0],&Coordinate[1]);
    Coordinate[2] = In_Or_Out(Coordinate[0],Coordinate[1]);
    printf("height is %.0f",Coordinate[2]);
    return 0;
}