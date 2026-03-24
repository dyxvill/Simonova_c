#include <stdio.h>
int main() {
    int n = 2;
    int *gpt;
    gpt = &n;
    printf("%d", *gpt);
}