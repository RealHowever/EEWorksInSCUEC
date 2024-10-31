#include <stdio.h>

int main()
{
    int BU_HUD(int x),BU_SIG(int x),BU_TEN(int x),QD_3(int x,int y,int z),SUM_3(int x,int y,int z);
    int Min_Num,Max_Num;
    scanf("%d%d",&Min_Num,&Max_Num);
    int test;
    for(test = Min_Num;test<=Max_Num;test++)
    {
        int QD,SUM;
        QD = QD_3(BU_HUD(test),BU_TEN(test),BU_SIG(test));
        SUM = SUM_3(BU_HUD(test),BU_TEN(test),BU_SIG(test));
        if(QD == 42 && SUM == 12)
        {
            printf("%d\n",test);
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
int QD_3(int x,int y,int z)
{
    int putout = 0;
    putout = x * y * z;
    return putout;
}
int SUM_3(int x,int y,int z)
{
    int putout;
    putout = x + y + z;
    return putout;
}