#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    FILE *fp;
    struct Person person;
    int choice;
    
    while (1) {
        printf("Меню: ");
        printf("1. Добавить запись\n");
        printf("2. Показать все записи\n");
        printf("3. Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);
        getchar(); 
        
        if (choice == 1) {
            printf("Введите имя: ");
            fgets(person.name, 50, stdin);
            for (int i = 0; person.name[i]; i++) {
                if (person.name[i] == '\n') {
                    person.name[i] = '\0';
                    break;
                }
            }
            printf("Введите возраст: ");
            scanf("%d", &person.age);
            getchar();

            fp = fopen("test.bin", "ab");
            if (fp == NULL) {
                printf("Ошибка\n");
                continue;
            }
            fwrite(&person, sizeof(struct Person), 1, fp);
            fclose(fp);
            printf("Запись добавлена\n");
            
        } else if (choice == 2) {

            fp = fopen("test.bin", "rb");
            if (fp == NULL) {
                printf("Ошибка\n");
                continue;
            }
            
            printf("Список людей: \n");
            while (fread(&person, sizeof(struct Person), 1, fp) == 1) {
                printf("Имя: %s, Возраст: %d\n", person.name, person.age);
            }
            fclose(fp);
            
        } else if (choice == 3) {
            break;
        } else {
            printf("Неверный выбор\n");
        }
    }
    
    return 0;
}