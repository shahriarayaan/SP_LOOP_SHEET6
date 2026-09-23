// NOTE>>> THE LIMIT IS 16 


#include <stdio.h>
int main(){
    int i,n;
    long long int res = 1;
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        res = res*i;
    }
    printf("%d", res);
    return 0;
}