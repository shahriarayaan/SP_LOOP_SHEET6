#include<stdio.h>
int main(){
    int x,y,i;
    long long int res = 1;
    scanf("%d %d", &x, &y);
    for ( i = 1; i <=y; i++)
    {
        res = res*x;
    }
    printf("%d", res);
    return 0;
}