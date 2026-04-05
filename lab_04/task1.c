#include <stdio.h>
int main() {
    FILE * fp= fopen("test.txt", "w");
    if(fp==NULL)
    {
        perror("Error occured while opening test.txt");
        return 1;
    }
    fclose(fp);
    return 0;
}