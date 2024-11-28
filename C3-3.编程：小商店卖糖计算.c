#include <stdio.h>

int main()
{
    float toffee=12.5,chocolate=15.7,fruitcandy=8.5;
    float wt,wc,wf,bal; //对应重量声明，收到钱数
    scanf("%f%f%f",&wt,&wc,&wf);
    scanf("%f",&bal);
    printf("sum=%.2f\nleft=%.2f",
    wt*toffee+wc*chocolate+wf*fruitcandy,
    bal-(wt*toffee+wc*chocolate+wf*fruitcandy));

    return 0;
}