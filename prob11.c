#include<stdio.h>
#include<math.h>
int main(){
    int i;
    int sum = 0;
    int value = 1;
    int gap = 1;
    
    //Series print

    for ( i = 1; i < INFINITY; i++)
    {
        printf("%d ", value);
        value = value + gap;
        gap++;        
        if (value >100)
        {
            break;
        }
    }
    return 0;
}