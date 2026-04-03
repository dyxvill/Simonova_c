#include <stdio.h>
struct Student {
    char name[10];
    int age;
    float sr_znach;
};
int main() {
    struct Student somebody;
    scanf("%s", somebody.name);
    scanf("%d", &somebody.age);
    scanf("%f", &somebody.sr_znach);
    printf("Имя - %s Age - %d Sredniy ball - %.2f", somebody.name, somebody.age, somebody.sr_znach);
    return 0;
}