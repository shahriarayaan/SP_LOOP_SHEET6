#include <stdio.h>
int main(){
    int n,i;
    int counter = 0;
    scanf("%d", &n);
    for ( i = n; i >0; i = i/10)
    {
        if (i%2==0)
        {
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}