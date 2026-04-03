#include <stdio.h>

enum Curs
{
    FIRST = 1,
    SECOND,
    THIRD,
    FOURTH
};

struct Student
{
    char name[50];
    int age;
    enum Curs curs;
    float sr_b;
};

void Plus_Student(struct Student *students, int *n) {
    printf("Введите имя - ");
    scanf("%s", students[*n].name);
    printf("Введите возраст - ");
    scanf("%d", &students[*n].age);
    printf("Введите курс(цифрой) - ");
    int t;
    scanf("%d", &t);
    students[*n].curs = t;
    printf("Введите средний балл - ");
    scanf("%f", &students[*n].sr_b);
    printf("Студент добавлен\n");
    (*n)++;
}

void printStudents(struct Student *students, int n) {
    if (n == 0) {
        printf("Нет студентов\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%s, %d, %d, %.2f\n", students[i].name, students[i].age, students[i].curs, students[i].sr_b);
    }
}

void findName(struct Student *students, int n, char *searchName) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        int equal = 1;
        for (int j = 0; j < 50; j++) {
            if (students[i].name[j] != searchName[j]) {
                equal = 0;
                break;
            }
            if (students[i].name[j] == '\0' && searchName[j] == '\0') {
                break;
            }
        }
        if (equal == 1) {  
            printf("Студент найден:\n");
            printf("%s, %d, %d, %.2f\n", students[i].name, students[i].age, students[i].curs, students[i].sr_b);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Студент с именем %s не найден\n", searchName);
    }
}

void sortsr_b(struct Student *students, int n) {
    if (n == 0) {
        printf("Нет студентов для сортировки\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].sr_b < students[j + 1].sr_b) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("Студенты отсортированы по среднему баллу\n");
}

int main() {
    struct Student students[100];
    int n = 0;
    int choice;
    char searchName[50];
    
    printf("Какую функцию хотите сделать?\n");
    printf("1. Добавить студента\n");
    printf("2. Вывести всех студентов\n");
    printf("3. Поиск студента по имени\n");
    printf("4. Сортировка по среднему баллу\n");
    do {
        printf("Выберите действие - ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                Plus_Student(students, &n);
                break;
            case 2:
                printStudents(students, n);
                break;
            case 3:
                if (n == 0) {
                    printf("Сначала добавьте студентов!\n");
                } 
                else {
                    printf("Введите имя для поиска: ");
                    scanf("%s", searchName);
                    findName(students, n, searchName);
                }
                break;
            case 4:
                sortsr_b(students, n);
                printStudents(students, n);
                break;
            default:
                printf("Неверный выбор!\n");
        }
    } while (choice != 4);
    return 0;
}