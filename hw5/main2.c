#include <stdio.h>

int main() {
    int x = 1000000;
    double pi = 4.0f;



    for (int i = 1; i <= x; i++) {
        if (i % 2 == 1) {
            pi -= 4.0 / (2 * i + 1);
        } else {
            pi += 4.0 / (2 * i + 1);
        }
    }

    printf("Approximation of PI after %d iterations: %.5lf\n", x, pi);

    return 0;
}
