#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    if ( N % 2 == 0 || N % 3 == 0 || N % 5 == 0)
    {
        printf("сложное");
    }
    else
    {
        printf("простое");
    }
    return 0;
}