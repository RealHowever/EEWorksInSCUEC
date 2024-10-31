#include <stdio.h>
int main()
{
    int Score,Grade;
    scanf("%d",&Score);
    if (Score>100 || Score <0)
    {
        printf("Input Error");
    }
    else
    {
        Grade = (Score)/10;
        switch(Grade)
        {
            case 10:
            case 9:
            printf("Level A");
            break;
            case 8:
            printf("Level B");
            break;
            case 7:
            printf("Level C");
            break;
            case 6:
            printf("Level D");
            break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
            printf("Level E");
            break;
        }
    }
    return 0;
}