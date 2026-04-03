#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Введите число элементов - ");
    int N;
    scanf("%d", &N);
    int *arr;
    arr = (int*)calloc(N, sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("%d", *arr);
    }
    free(arr);
    return 0;
}