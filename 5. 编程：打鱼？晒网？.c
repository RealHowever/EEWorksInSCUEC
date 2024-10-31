#include <stdio.h>

int main()
{
    int day,judge;
    scanf("%d",&day);
    judge = day%5;
    switch (judge)
    {
    case 0:
    case 4:printf("dry the nets");
        break;
    case 1:
    case 2:
    case 3:printf("fishing");
        break;
    }
    return 0;
}