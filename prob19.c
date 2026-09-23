#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int reverse = 0;
    for (int i = n; i > 0; i = i / 10) {
        int digit = i % 10;
        reverse = (reverse * 10) + digit;
    }
    printf("%d\n", reverse);
    return 0;
}