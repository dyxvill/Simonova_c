#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];
    fp = fopen("test.txt", "w");
    fprintf(fp, "1234567890");
    fclose(fp);
    fp = fopen("text.txt", "r");

    fseek(fp, 5, SEEK_SET);

    fgets(buffer, 10, fp);
    printf("Данные с позиции 5: %s\n", buffer);
    
    fclose(fp);
    return 0;
}