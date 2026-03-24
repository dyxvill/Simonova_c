#include <stdio.h>
int main() {
    int n;
    int *gpt;
    gpt = (void*)&n;
    printf("%p", gpt);
}