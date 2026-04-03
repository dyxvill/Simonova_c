#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Введите размер массива - ");
    int N;
    scanf("%d", &N);
    int *arr;
    arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("Введите число для массива - ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }

    free(arr);
    return 0;
}