#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    printf("Сколько у массива элементов - ");
    int N;
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    if (arr == NULL) {
        return 1;
    }
    printf("Введите %d элементов массива:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Исходный массив - ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\nКакой элемент хотите удалить(по индексу) - ");
    int a;
    scanf("%d", &a);
    for (int i = a; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }
    N = N - 1;
    arr = (int*)realloc(arr, N * sizeof(int));
    if (arr == NULL && N > 0) {
        return 1;
    }
    printf("Новый массив - ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);  
    }
    free(arr);
    return 0;
}