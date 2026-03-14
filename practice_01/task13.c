#include <stdio.h>
int main() {
    int a;
    printf("Введите число от 0 до 100:");
    scanf("%d", &a);
    if ( a <= 100 && a >= 90 )
    {
        printf("\nОтлично");
    }
    else if (a <= 89 && a >= 75)
    {
        printf("\nХорошо");
    }
    else if (a <= 74 && a >= 60)
    {
        printf("\nУдовлетворительно");
    }
    else
    {
        printf("\nНеудовлетворительно");
    }
    return 0;
}