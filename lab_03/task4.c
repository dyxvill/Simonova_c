#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Введите число элементов - ");
    int N;
    scanf("%d", &N);
    int *arr;
    arr = (int*)malloc(N * sizeof(int));
    printf("До какого числа хотите увеличить массив - ");
    int m;
    scanf("%d", &m);
    arr = (int*)realloc(arr, m * sizeof(int));
    for (int i = N; i < m; i++)
    {
        printf("Введите число, которое хотите добавить - ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d", arr[i]);
    }
    arr = (int*)realloc(arr, N * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
}