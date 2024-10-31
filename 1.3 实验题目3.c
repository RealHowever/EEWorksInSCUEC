#include <stdio.h>

int main()
{
    int QD_2(int x,int y);
    int num1 = 0,num2 = 0;
    scanf("%d%d",&num1,&num2);
    printf("%d",QD_2(num1,num2));
    return 0;
}

int QD_2(int x,int y)
{
    int z = 0;
    z = x * y;
    return z;
}