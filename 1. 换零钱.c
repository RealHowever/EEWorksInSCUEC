#include <stdio.h>

const int DEFAULT_MONEY = 100;
const int DEFAULT_COUNT = 100;
int main()
{
    int Five_Yuan=1,One_Yuan=1,Half_Yuan=1,total=0;
    printf("5yuan 1yuan 0.5yuan\n");
    for(Five_Yuan = 1;Five_Yuan<=DEFAULT_COUNT;Five_Yuan++)
    {
        for(One_Yuan = 1;One_Yuan <= DEFAULT_COUNT - Five_Yuan;One_Yuan++)
        {
            Half_Yuan = DEFAULT_COUNT - Five_Yuan - One_Yuan;
            if(DEFAULT_MONEY == 5 * Five_Yuan + One_Yuan + 0.5 * Half_Yuan)
            {
                printf("%6d%6d%6d\n",Five_Yuan,One_Yuan,Half_Yuan);
                total++;
            }
        }
    }
    printf("total:%d",total);
    return 0;
}