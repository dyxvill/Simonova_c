#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];  
    int age;
};

int main() {
    printf("Сколько студентов? - ");
    int N;
    scanf("%d", &N);

    struct Student *students = (struct Student*)malloc(N * sizeof(struct Student));
    if (students == NULL) {
        return 1;
    }
    
    for (int i = 0; i < N; i++) {
        printf("Студент %d:\n", i + 1);
        printf("Введите имя - ");
        scanf("%s", students[i].name);
        printf("Введите возраст - ");
        scanf("%d", &students[i].age);
    }
    printf("Список студентов\n");
    for (int i = 0; i < N; i++) {
        printf("Студент %d: %s, %d \n", i + 1, students[i].name, students[i].age);
    }
    int maxage = 0;
    for (int i = 1; i < N; i++) {
        if (students[i].age > students[maxage].age) {
            maxage = i;
        }
    }

    printf("Самый старший студент - %s\n", students[maxage].name);
    free(students);
    
    return 0;
}