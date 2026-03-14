#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if ( a > b && a > c)
    {
        printf("Максимальное = %d", a);
    }
    else if ( b > c && b > a)
    {
        printf("Максимальное = %d", b);
    }
    else
    {
        printf("Максимальное = %d", c);
    }
    return 0;
} 
