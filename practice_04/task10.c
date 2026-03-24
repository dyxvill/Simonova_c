#include <stdio.h>
int main() {
    double n;
    double *gpt;
    gpt = &n;
    printf("%lu", sizeof(*gpt));
}