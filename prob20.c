#include <stdio.h>
int main() {
    int n,i;
    scanf("%d", &n);
    int reverse = 0;
    for (i = n; i > 0; i = i / 10) {
        int digit = i % 10;
        reverse = (reverse * 10) + digit;
    }
    if (n == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}