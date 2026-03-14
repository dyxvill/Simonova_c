#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    float d = a / b;
    printf("%.1f", d);
    return 0;
}