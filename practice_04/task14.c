#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int l = 6;
    int *p;
    p = &numbers[l - 1];
    for (int i = 0; i < l; i++)
    {
        printf("%d ", *p);
        p--;
    }
    return 0;
}