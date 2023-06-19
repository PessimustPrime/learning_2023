#include <stdio.h>

union DoubleUnion {
    double value;
    unsigned long long bits;
};

void printExponent(double x) {
    union DoubleUnion u;
    u.value = x;
    unsigned long long exponent = (u.bits >> 52) & 0x7FF;

    printf("Hexadecimal: 0x%llx\n", exponent);

    printf("Binary: 0b");
    int i;
    for (i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}

