#include<stdio.h>

int main(){
    int i;
    int sum = 0;
    int value = 1;
    int gap = 1;
    
    //Series print

    for ( i = 1; i <=100; i++)
    {
        printf("%d ", value);
        value = value + gap;
        gap++;   
        sum = sum+value;     
    }
    return 0;
}