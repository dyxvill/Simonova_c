#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    
    fp = fopen("test.txt", "r");
    
    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    

    if (feof(fp)) {
        printf("\nДостигнут конец файла\n");
    }
    

    if (ferror(fp)) {
        printf("Произошла ошибка при чтении файла\n");
    }
    
    fclose(fp);
    return 0;
}