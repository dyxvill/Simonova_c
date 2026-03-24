#include <stdio.h>
int main() {
    int n;
    int *gpt;
    gpt = &n;
    int **ptr;
    ptr = &gpt;
    printf("%d, %d", *gpt, **ptr);
}