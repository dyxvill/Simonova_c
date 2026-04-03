#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    printf("Сколько у массива элементов - ");
    int N;
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    printf("Куда хотите вставить элемент - ");
    int a;
    scanf("%d", &a);
    for (int i = 0; i < N; i++)
    {
        if (i == a)
        {
            printf("На что меняем? - ");
            int b;
            scanf("%d", &b);
            arr[i + 1] = b;
        }
        arr++;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d", *arr);
        arr++;
    }
    int c = N + 1;
    arr = (int*)realloc(arr, c * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("%d", *arr);
        arr++;
    }
    return 0;
}