#include <stdio.h>
int main(){
    int i,j;
    for ( i = 2; i <= 1000; i++)
    {
        int counter = 0;
        for ( j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("%d ",i );
        }
    }
    return 0;
}