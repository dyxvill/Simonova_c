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
    printf("Введите элементы массива:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Исходный массив - ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nКуда хотите вставить элемент(по индексу) - ");
    int a;
    scanf("%d", &a);
    printf("Какое число хотите вставить? - ");
    int b;
    scanf("%d", &b);
    N = N + 1;
    arr = (int*)realloc(arr, N * sizeof(int));
    for (int i = N - 1; i > a; i--) {
        arr[i] = arr[i - 1];
    }
    arr[a] = b;
    printf("Массив после вставки - ");
    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
}