#include <stdio.h>
int main() {
    int text = 12;
    char text2[] = "Hello world";
    char * filename = "test.txt";
    FILE * fp = fopen(filename, "w");
    if(!fp)
    {
        printf("Error");
        return 1;
    }
    if(fp)
    {
        fprintf(fp, "%d %s", text, text2);
        fclose(fp);
        printf("файл записан: ");
    }
    FILE * tp = fopen(filename, "r");
    if(!tp)
    {
        printf("Error");
        return 1;
    }
    if(tp)
    {
        printf("%d %s\n", text, text2);
    }
    fclose(tp);
    return 0;
}