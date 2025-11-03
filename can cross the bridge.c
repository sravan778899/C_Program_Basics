#include <stdio.h>

int main()
{
    // Constrained code start
    int x, y, z, r;

    scanf("%d %d %d", &x, &y, &z);

    int extra = z - y;  // Missing '=' sign fixed
    int mangoes = extra / x;  // Divide properly

    // Constrained code ends here

    printf("%d", mangoes);

    return 0;
}
