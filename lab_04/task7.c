#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"viks", 17};
    struct Person p2;

    FILE *fp = fopen("test.txt", "w");
    fwrite(&p1, sizeof(struct Person), 1, fp);
    fclose(fp);

    FILE *tp = fopen("test.txt", "r");
    fread(&p2, sizeof(struct Person), 1, tp);
    fclose(tp);

    printf("Имя: %s, Возраст: %d\n", p2.name, p2.age);
    
    return 0;
}