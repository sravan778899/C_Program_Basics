#include <stdio.h>

int main()
{
    
    int x, y, z, r;

    scanf("%d %d %d", &x, &y, &z);

    int extra = z - y; 
    int mangoes = extra / x;  

    

    printf("%d", mangoes);

    return 0;
}
