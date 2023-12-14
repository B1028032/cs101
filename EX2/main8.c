#include <stdio.h>

int main()
{
    int x = 9;
    int y = 9;
    int z = 1;
    int sum;

    if(x<0)
    {
        sum = x*100 - y*10 - z*1;
        printf("%d", sum);
    }
    else
    {
        sum = x*100 + y*10 + z*1;
        printf("%d", sum);
    }
}