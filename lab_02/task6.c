#include <stdio.h>

union Data
{
    int a;
    float b;
    char c;
};

struct Fl {
    union Data info;
} ;


int main() {
    struct Fl vusov = {120};
    vusov.info.a = 120;
    printf("%d - %.2f - %c", vusov.info.a, vusov.info.b, vusov.info.c);
}