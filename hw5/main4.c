#include <stdio.h>

int main() {
    int a = 12345;
    
    int units = a / 1 % 10;
    int ten = a / 10 % 10;
    int hundred = a / 100 % 10;
    int thousand = a / 1000 % 10;
    int other = a / 10000;
    
    int newnum = other*10000 + units*1000 + hundred*100 + ten*10 + thousand;
    printf("%d\n", newnum);
    return 0;
}
