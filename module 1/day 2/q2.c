#include <stdio.h>

void swap(void* ptr1, void* ptr2, size_t size) {
    char* p1 = (char*)ptr1;
    char* p2 = (char*)ptr2;
    
    while (size--) {
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main() {
    int a = 10;
    int b = 20;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);
    
    double x = 3.14;
    double y = 2.71;
    
    printf("Before swap: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %f, y = %f\n", x, y);
    
    return 0;
}

