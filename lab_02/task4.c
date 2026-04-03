#include <stdio.h>

struct Rectangle
{
    int shirina;
    int visota;
} *p1, *p2;
int Plochad(int shirina, int visota)
{
    return shirina * visota;
};

int Perimetr(int shirina, int visota)
{
    return (shirina + visota) * 2;
};

int Plochad1(int *p1, int *p2)
{
    return *p1 * *p2;
};

int Perimetr1(int *p1, int *p2)
{
    return (*p1 + *p2) * 2;
};


int main() {
    struct Rectangle f;
    printf("Ширина = ");
    scanf("%d", &f.shirina);    
    printf("Высота = ");
    scanf("%d", &f.visota);
    printf("Периметр(знач) = %d\n", Perimetr(f.shirina, f.visota));
    printf("Площадь(знач) = %d\n", Plochad(f.shirina, f.visota));
    struct Rectangle *p1 = &f;
    struct Rectangle *p2 = &f;
    int shirina = (*p1).shirina;
    int visota = (*p2).visota;
    printf("Периметр(ук) = %d\n", Perimetr1(&shirina, &visota));
    printf("Площадь(ук) = %d", Plochad1(&shirina, &visota));
    return 0;
}