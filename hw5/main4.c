#include <stdio.h>

int main() {
    int num = 12345; 


    int thousands = (num / 1000) % 10; 
    int units = num % 10; 

        
    num = num - (thousands * 1000) - units; 
    num = num + (units * 1000) + thousands; 

    printf("%d\n", num);

    return 0;
}