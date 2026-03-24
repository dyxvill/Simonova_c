#include <stdio.h>
int main() {
    int n = 2;
    int g = 4;
    int *gpt;
    gpt = &n;
    *gpt = 3;

    int *ptr;
    ptr = &g;
    *ptr = 5;
    printf("%d, %d", n, g);
}