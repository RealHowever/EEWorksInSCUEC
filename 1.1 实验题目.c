#include <stdio.h>

int main()
{
    int day = 0;
    scanf("%d",&day);
    printf("%dweeks%ddays",day/7,day%7);
    return 0;
}