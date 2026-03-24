#include <stdio.h>
int main() {
    int n;
    int *gpt;
    gpt = &n;
    if (gpt == NULL)
    {
        printf("pustoy \n");
    }
    else
    {
        printf("ne pustoy \n");
    }
    printf("%d, %d", n, *gpt);

}