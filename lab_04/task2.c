#include <stdio.h>
int main() {
    char c;
    char * text = "Hello world";
    int n = sizeof(text) / sizeof(text[0]);
    char * filename = "test.txt";
    FILE * fp= fopen(filename, "w");;
    if(fp==NULL)
    {
        perror("Error occured while opening test.txt");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        putc(text[i], fp);
    }
    fclose(fp);
    printf("файл записан: ");
    FILE * tp= fopen(filename, "r");
    if(fp)
    {
    while((c=getc(tp))!= EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    }
    return 0;
}