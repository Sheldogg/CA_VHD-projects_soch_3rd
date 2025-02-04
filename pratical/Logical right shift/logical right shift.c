#include <stdio.h>
#include <math.h>

int binary_to_decimal(int n) {
    int decimal = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        decimal += remainder * pow(2, i);
        n /= 10;
        i++;
    }
    return decimal;
}

int decimal_to_binary(int n) {
    int binary = 0, remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        binary += remainder * i;
        n /= 2;
        i *= 10;
    }
    return binary;
}

int main() {
    int n1, k;
    printf("Enter a binary number and the shift amount: ");
    scanf("%d %d", &n1, &k);

    int decimal_n1 = binary_to_decimal(n1);
    int shifted_result = decimal_n1 >> k;

    printf("Original binary number: %d\n", n1);
    printf("Shifted binary number: %d\n", decimal_to_binary(shifted_result));

    return 0;
}

