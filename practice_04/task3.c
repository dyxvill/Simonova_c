#include <stdio.h>
int main() {
    int n = 2;
    int g = 4;
    int c = g;
    int *gpt;
    gpt = &n;
    int *ptr;
    ptr = &c;
    g = *gpt;
    n = *ptr;
    printf("%d, %d", n, g);
}