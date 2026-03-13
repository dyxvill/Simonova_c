#include <stdio.h>

int main() {
    int a, b, c;
    printf("Адрес a: %p\n", (void*)&a);
    printf("Адрес b: %p\n", (void*)&b);
    printf("Адрес c: %p\n", (void*)&c);
    char *ptr_a = (char*)&a;
    char *ptr_b = (char*)&b;
    char *ptr_c = (char*)&c;
    long diff_ab = ptr_b - ptr_a;
    long diff_bc = ptr_c - ptr_b;
    long diff_ac = ptr_c - ptr_a;
    printf("\nРазница между a и b: %ld байт\n", diff_ab);
    printf("Разница между b и c: %ld байт\n", diff_bc);
    printf("Разница между a и c: %ld байт\n", diff_ac);
    printf("Компилятор для оптимизации может разместить переменные с интервалом 4 байта, добавить выравнивание или расположить в другом порядке, откуда и появляется разница");
    return 0;
}
