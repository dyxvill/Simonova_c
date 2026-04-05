#include <stdio.h>
int main() {
    char * text = "Hello world";
    char * text2 = "\nHow are you?";
    char * filename = "test.txt";
    FILE * fp= fopen(filename, "w");;
    if(fp==NULL)
    {
        perror("Error occured while opening test.txt");
        return 1;
    }
    if(fp)
    {
        fputs(text, fp);
        fputs(text2, fp);
        fclose(fp);
    }
    printf("файл записан: ");
    char buffer[256];
    FILE * tp= fopen(filename, "r");
    if(tp)
    {
    while((fgets(buffer, 256, tp))!=NULL)
    {
        printf("%s", buffer);
    }
    fclose(fp);
    }
    return 0;
}