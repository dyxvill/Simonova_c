#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    printf("Адрес = %p \n", (void*)&a);
    printf("Содержимое = %d", a);

}
