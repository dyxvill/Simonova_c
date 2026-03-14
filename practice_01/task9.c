#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int b = a / 2;
    int c = a / 3;
    if ( a % 2 == 0 )
    {
        printf("Ваше число делится на 2 = %d \n", b);
    }
    if (a % 3 == 0)
    {
        printf("Ваше число делится на 3 = %d \n", c);
    }
    else
    {
        printf("Ваше число не делится на 2 или 3");
    }
    return 0;
}