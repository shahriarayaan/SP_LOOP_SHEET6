#include<stdio.h>
int main(){
    int a,i;
    scanf("%d", &a);
    int counter = 0;
    for ( i = 1; i <=a; i++)
    {
        if (a%i==0)
        {
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}