#include <stdio.h>
int main() {
    int n;
    int *gpt;
    gpt = &n;
    int **ptr;
    ptr = &gpt;
    **ptr = 3;
    printf("%d, %d, %d", n, *gpt, **ptr);

}