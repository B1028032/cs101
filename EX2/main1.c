#include <stdio.h>

int main()
{
    int i = 10;

    if (i & (i - 1) == 0)
    {
        printf("是\n");
    }
    else
    {
        printf("否\n");
    }

    return 0;
}