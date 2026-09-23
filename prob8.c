#include <stdio.h>

int main() {
    int a, b, gcd = 1;
    scanf("%d %d", &a, &b);
    int min;
    if (a>=b){
        min = a;
    } else{
        min = b;
    }
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    printf("GCD: %d\n", gcd);
    return 0;
}