#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result;
    
    if (oper_type == 1) {
        // Set 1st bit
        result = num | (1 << 0);
    } else if (oper_type == 2) {
        // Clear 31st bit
        result = num & ~(1 << 30);
    } else if (oper_type == 3) {
        
        result = num ^ (1 << 15);
    } else {
        // Invalid operation type
        result = num;
    }
    
    return result;
}

int main() {
    int num = 123; // Example input
    int oper_type = 2; // Example operation type
    
    int result = bit_operations(num, oper_type);
    
    printf("Result: %d\n", result);
    
    return 0;
}

