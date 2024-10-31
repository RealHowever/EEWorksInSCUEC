#include <stdio.h>

int main()
{
    char word,trans;
    scanf("%c",&word);
    if(word<=90 && word>=65)
    {
        trans = word +32;
        printf("%c,%d",trans,trans);
    }
    else
    	printf("%c,%d",word,word);
    return 0;
}
