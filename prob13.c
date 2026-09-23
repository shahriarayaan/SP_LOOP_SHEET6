#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int first = 1, second = 1, next;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            next = first;
        } else if (i == 2) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
    }
    printf("%d\n", next);
    return 0;
}