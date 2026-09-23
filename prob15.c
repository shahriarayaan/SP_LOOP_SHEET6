#include <stdio.h>
int main(){
    int n,i;
    scanf("%d", &n);
    for ( i = n; i >0; i = i/10)
    {
        printf("%d\n", i%10);
    }
    return 0;
}