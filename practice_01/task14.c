#include <stdio.h>
int main() {
    printf("Введите номер дня недели: ");
    int x;
    scanf("%d", &x);
    switch(x)
    {
        case 1:
            printf("\nПонедельник");
            break;
        case 2:
            printf("\nВторник");
            break;
        case 3:
            printf("\nСреда");
            break;
        case 4:
            printf("\nЧетверг");
            break;
        case 5:
            printf("\nПятница");
            break;
        case 6:
            printf("\nСуббота");
            break;
        case 7:
            printf("\nВоскресенье");
            break;
    }
    return 0;
}