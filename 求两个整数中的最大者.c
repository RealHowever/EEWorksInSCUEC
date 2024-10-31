#include <stdio.h>

int main(void)
{
    int max(int x,int y);
    int num1,num2;
    auto int num1,num2;
    int maxnum;
    scanf("%d %d",&num1,&num2);
    maxnum = max(num1,num2);
    printf("%d",maxnum);
}
int max(int x,int y)
{
    int z;
    if(x>y)
    {
        z=x;
    }
    else z=y;
    return z;
}
