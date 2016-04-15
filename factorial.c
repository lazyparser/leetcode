#include <stdio.h>

int main() {
    int i; long long power = 1;
    for (i = 2; i < 1000; i++) {
        power *= i;
        printf("%4d! is %16lld\n", i, power);
        if (power < 0)
            break;
    }
}
