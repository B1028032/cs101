#include <stdio.h>


int main()
{
    int n = 7;
    int rowCount = 1;



    for (n; n > 0; n--)
    {

        for (int j = 1; j <= n; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= rowCount; j++)
        {
            printf("%d ", rowCount);
        }

        printf("\n");

        rowCount++;
    }

    return 0;
}