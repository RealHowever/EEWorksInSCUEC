#include <stdio.h>
#include <math.h>

int main()
{
    int BU_HUD(int x),BU_TEN(int x),BU_SIG(int x);
    int Min_Num,Max_Num;
    scanf("%d%d",&Min_Num,&Max_Num);
    int test,QD_From_Test;
    for(test = Min_Num;test <= Max_Num;test++)
    {
        QD_From_Test = pow(BU_HUD(test),3) + pow(BU_TEN(test),3) + pow(BU_SIG(test),3);
        if (QD_From_Test == test)
        {
            printf("%d\n",QD_From_Test);
        } 
    }
    return 0;
}
int BU_HUD(int x)
{
    int hud;
    hud = x / 100;
    return hud;
}
int BU_TEN(int x)
{
    int BU_HUD(int x);
    int ten;
    ten = (x - BU_HUD(x) * 100)/10;
    return ten;
}
int BU_SIG(int x)
{
    int BU_HUD(int x),BU_SIG(int x);
    int sig;
    sig = (x - BU_HUD(x) * 100 - BU_TEN(x) * 10);
    return sig;
}