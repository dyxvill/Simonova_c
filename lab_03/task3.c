#include <stdio.h>
#include <stdlib.h>

int Maximaln(int *p, int n) {
    int elem = *p;
    for (int i = 0; i < n; i++)
    {
        if(elem < *p)
        {
            elem = *p;
        }
        p++;
    }
    return elem;
}

int Minimaln(int *p, int n) {
    int elem = *p;
    for (int i = 0; i < n; i++)
    {
        if(elem > *p)
        {
            elem = *p;
        }
        p++;
    }
    return elem;
}

int Sum(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *p;
        p++;
    }
    return sum;
}


int main() {
    printf("Введите кол-во элементов - ");
    int N;
    scanf("%d", &N);
    int *arr;
    arr = (int*)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++)
    {
        printf("Введите число для массива - ");
        scanf("%d", &arr[i]);
    }

    printf("Сумма элементов - %d\n", Sum(arr, N));
    printf("Максимальное число - %d\n", Maximaln(arr, N));
    printf("Минимальное число - %d", Minimaln(arr, N));

}