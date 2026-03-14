#include <stdio.h>
int main() {
    int a; 
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float d = (a + b + c) / 3;
    printf("Срзнач = %f", d);
    return 0;
}