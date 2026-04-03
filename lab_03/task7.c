#include <stdio.h>
#include <stdlib.h>

struct Student {
    char * name;
    int age;
};


int main() {
    printf("Сколько студентов? - ");
    int N;
    scanf("%d", &N);
    struct Student human[] = {};
    int *arr;
    arr = human;
    arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {   
        printf("Name? - ");
        scanf("%d", arr->name);
        printf("Age? - ");
        scanf("%d", arr->age);
        arr++;
    }
    for (int i = 0; i < N; i++)
    {
        printf("{%s, %d} ", arr->name, arr->age);
        arr++;
    }
}