#include <stdio.h>

int main()
{
    int num,hud,ten,sig;
    scanf("%d",&num);
    hud = num / 100;
    ten = (num - hud * 100)/10;
    sig = (num - hud * 100 - ten *10);
    printf("%d",hud + ten + sig);
    return 0;
}