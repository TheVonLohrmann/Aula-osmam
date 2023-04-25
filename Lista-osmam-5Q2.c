#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int num);

int main() {
    int num;

    for (num = 30; num <= 33; num++) {
        printf("| Fatorial de %d = %lld\n", num, fatorial(num));
    }

    return 0;
}

long long int fatorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}