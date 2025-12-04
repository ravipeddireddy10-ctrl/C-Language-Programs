#include <stdio.h>
int reverse(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse of %d = %d", num, reverse(num));
    return 0;
}

int reverse(int n) {
    int rev = 0;   
    for (; n > 0; n /= 10) {
        rev = rev * 10 + (n % 10);
    }

    return rev;
}