#include <stdio.h>

int main() {
    FILE *fp;
    long size;

    fp = fopen("test.txt", "wb");
    fprintf(fp, "Hello world");
    fclose(fp);

    fp = fopen("test.txt", "rb");
    fseek(fp, 0, SEEK_END); 
    size = ftell(fp);         
    fclose(fp);
    
    printf("Размер файла: %ld байт\n", size);
    
    return 0;
}