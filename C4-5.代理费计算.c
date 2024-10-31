#include <stdio.h>

int main()
{
    int Trans_Amount;
    float Agent_Payoff;
    char Type;
    scanf("%d",&Trans_Amount);
    if(Trans_Amount>0 && Trans_Amount<3000)
    {
        Type = 'A';
    }
    else if(Trans_Amount>=3000 && Trans_Amount<6000)
    {
        Type = 'B';
    }
    else if(Trans_Amount>=6000 && Trans_Amount<10000)
    {
        Type = 'C';
    }
    else Type = 'D';
    switch (Type)
    {
        case 'A':
        {
            Agent_Payoff = 18 + Trans_Amount * 0.012;
            printf("the cost is %.2f RMB",Agent_Payoff);
        }
            break;
        case 'B':
        {
            Agent_Payoff = 36 + Trans_Amount * 0.006;
            printf("the cost is %.2f RMB",Agent_Payoff);
        }
            break;
        case 'C':
        {
            Agent_Payoff = 54 + Trans_Amount * 0.003;
            printf("the cost is %.2f RMB",Agent_Payoff);
        }
            break;
        case 'D':printf("data error!");
    }
    return 0;
}