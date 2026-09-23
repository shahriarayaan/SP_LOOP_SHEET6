#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int sum = 0;
    for (i = n; i > 0; i = i / 10) {
        int digit = i % 10;
        sum = sum + digit;
    }
    printf("%d\n", sum);
    return 0;
}