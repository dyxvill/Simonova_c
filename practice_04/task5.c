#include <stdio.h>
int main() {
    int n, g;
    int *gpt, *ptr;
    ptr = (void*)&g;
    gpt = (void*)&n;
    printf("%p, %p \n", ptr, gpt);
    if (*ptr == *gpt)
    {
        printf("yeep");
    }
    else
    {
        printf("nope");
    }

}