#include <stdio.h>

int main() {
    int digits[1000] = {0}; 
    
    digits[0] = 1;
    int digit_count = 1; 
    
    for (int i = 0; i < 1000; i++) {
        int carry = 0; 
        
        for (int j = 0; j < digit_count; j++) {
            int product = digits[j] * 2 + carry;
            digits[j] = product % 10; 
            carry = product / 10;    
        }
        
        while (carry > 0) {
            digits[digit_count] = carry % 10;
            carry /= 10;
            digit_count++;
        }
    }

    long sum = 0;

    for (int i = digit_count - 1; i >= 0; i--) {
        sum += digits[i];
    }
    
    printf("\nTHe sum: %ld", sum);

    return 0;
}