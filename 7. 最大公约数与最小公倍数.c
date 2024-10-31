#include <stdio.h>
int gcd(int x,int y)
{
    int j=1;
    while (y!=0)
    {
        j = x % y;
        x = y;
        y = j;
    }
    return x;
}
int lcm(int x,int y)
{
    int result;
    result = x * y / gcd(x,y);
    return result;
}
int main()
{
    int x,y;
    scanf("%d,%d",&x,&y);
    printf("gcd:%d\nlcm:%d\n",gcd(x,y),lcm(x,y));
    return 0;
}