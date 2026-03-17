#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int count = 0;
    while (N != 0)
    {
        count = count + 1;
        scanf("%d", &N);
    }
    printf("количество = %d", count);
    return 0;
}