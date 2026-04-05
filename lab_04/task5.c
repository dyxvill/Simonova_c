#include <stdio.h>

int main() {
    char str[200];
    printf("Введите строку: ");
    fgets(str, 200, stdin);
    FILE * fp = fopen("test.txt", "w");
    fputs(str, fp);
    fclose(fp);
    FILE * tp = fopen("test.txt", "r");
    char buffer[256];
    fgets(buffer, 256, tp);
    printf("Содержимое файла: %s", buffer);
    fclose(tp);
    return 0;
}