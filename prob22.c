#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            int factor = i;
            int counter = 0; 
            for (j = 1; j <= factor; j++) {
                if (factor % j == 0) {
                    counter++;
                }
            }
            if (counter == 2) {
                printf("%d ", factor);
            }
        }
    }
    printf("\n");
    return 0;
}