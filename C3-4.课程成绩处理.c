#include <stdio.h>

int main()
{
    int mark1,mark2,mark3,mark4;
    scanf("%d,%d,%d,%d",&mark1,&mark2,&mark3,&mark4);
    printf("sum=%d;average=%.2f",mark1+mark2+mark3+mark4,(mark1+mark2+mark3+mark4)/4.0);
    return 0;
}