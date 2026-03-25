#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int l = 6;
    int *p;
    p = numbers;
    int copy[l - 1];
    for (int i = 0; i < l; i++)
    {
        copy[i] = *p; 
        printf("%d ", copy[i]);
        p++;
    }
    return 0;
}