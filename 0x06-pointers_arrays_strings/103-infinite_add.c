#include "main.h"
#include <stdio.h>

/**
 * main - adds two numbers
 *
 * Return: Always 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;
    
    r[size_r - 1] = '\0';
    
  while (i >= 0 || j >= 0 || carry != 0) {
        if (i >= 0) {
            carry += n1[i] - '0';
        }
        if (j >= 0) {
            carry += n2[j] - '0';
        }
        
        r[size_r - 2 - k++] = (carry % 10) + '0';
        
        carry /= 10;
        
        if (k >= size_r - 1) {
            return 0;
        }
        
        i--;
        j--;
    }
    
    return &r[size_r - 1 - k];
}

int main() {
    char n1[] = "123456789";
    char n2[] = "987654321";
    char result[20];
    
    char *sum = infinite_add(n1, n2, result, sizeof(result));
    
    if (sum) {
        printf("Sum: %s\n", sum);
    } else {
        printf("Result cannot be stored in the buffer.\n");
    }
    
    return 0;
}
