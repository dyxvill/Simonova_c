#include <stdio.h>
int main() {
    int n = 2;
    int *gpt;
    gpt = &n;
    *gpt = 3;
    printf("%d", n);
}