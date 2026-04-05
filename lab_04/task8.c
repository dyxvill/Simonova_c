#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[3] = {
        {"lisa", 19},
        {"vika", 17},
        {"katia", 18}
    };
    struct Person read_people[3];
    FILE *fp = fopen("test.txt", "w");
    fwrite(people, sizeof(struct Person), 3, fp);
    fclose(fp);
    FILE *tp = fopen("test.txt", "r");
    fread(read_people, sizeof(struct Person), 3, tp);
    fclose(tp);
    for (int i = 0; i < 3; i++) {
        printf("Человек %d: Имя: %s Возраст: %d\n", i + 1, read_people[i].name, read_people[i].age);
    }
    
    return 0;
}