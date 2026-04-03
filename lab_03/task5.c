#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    printf("Сколько у массива элементов - ");
    int N;
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("%d", *arr);
        arr++;
    }
    printf("\nКакой элемент хотите удалить(по индексу) - ");
    int a;
    scanf("%d", &a);
    for (int i = 0; i < N - 1; i++)
    {
        if (i == a)
        {
            arr[i] = 1;
        }
        arr++;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d", *arr);
        arr++;
    }
    printf("\nex\n");
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0 ;
        }
    }
    int c = N - 1;
    arr = (int*)realloc(arr, c * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("%d", *arr);
        arr++;
    }
    return 0;

}