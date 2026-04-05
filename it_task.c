#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
    float high;
    int birthday;
};

int AddPerson(struct Person *human, int *n, int *a) 
{
    printf("Введите имя - ");
    scanf("%s", human[*n].name);
    if(isalpha(human[*n].name) == 0)
    {
        printf("Имя должно содержать только буквы");
        break;
    }
    printf("Введите возраст - ");
    scanf("%d", &human[*n].age);
    printf("Введите рост - ");
    scanf("%f", &human[*n].high);
    if(&human[*n].high < 0)
    {
        printf("Рост должен быть положительным числом");
        break;
    }
    printf("Введите год рождения - ");
    scanf("%d", &human[*n].birthday);
    printf("Запись добавлена\n");

    n += 1;
    struct Person *human = (struct Person*)realloc(n * sizeof(struct Person));
}

void PrintAll(struct Person *human, int n) {
    if (n == 0) {
        printf("Нет записей\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%s, %d, %.2f, %d\n", human[i].name, human[i].age, human[i].high, human[i].birthday);
    }
}

void SortByName(struct Person *human, int n) {
    char english[] = "abcdefghijklmnopqrstuvwxyz";
    int e = sizeof(english) / sizeof(english[0]);
    char russian[] = "абвгдеёжзийклмнопрстуфхцчшщьъэюя";
    int r = sizeof(russian) / sizeof(russian[0]);
    int number;
    if (n == 0) {
        printf("Нет записей для сортировки\n");
        return;
    }
    for (int i = 0; i < (*n) - 1; i++) {
        for (int j = 0; j < e; j++) {
            if (human[i].name[i] == english[j])
            {
                number = j;
                if ()
            }
        }
    }
    printf("Записи отсортированы по имени\n");
}

void SortByAge(struct Person *human, int n) {
    if (n == 0) {
        printf("Нет записей для сортировки\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (human[j].age < human[j + 1].age) {
                struct Person temp = human[j];
                human[j] = human[j + 1];
                human[j + 1] = temp;
            }
        }
    }
    printf("Записи отсортированы по возрасту\n");
}

void Statistic(struct Person *human, int n)
{
    int sum = 0;
    float sr_age;
    for (int i = 0; i < n; i++)
    {
        sum += human[i].age;
    }
    sr_age = float(sum / n);
    float maxhigh = 0.00;
    for (int i = 0; i < n; i++)
    {
        if (human[i].high > maxhigh)
        {
            maxhigh = human[i].high;
        }
    }
    printf("Статистика:");
    printf("Средний возраст - %.2f", sr_age);
    printf("Максимальный рост - %.2f", maxhigh);
}

void FindByName(struct Person *human, int n, char *searchName) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        int equal = 1;
        for (int j = 0; j < 50; j++) {
            if (human[i].name[j] != searchName[j]) {
                equal = 0;
                break;
            }
            if (human[i].name[j] == '\0' && searchName[j] == '\0') {
                break;
            }
        }
        if (equal == 1) {  
            printf("Запись найдена:\n");
            printf("%s, %d, %.2f, %.d\n", human[i].name, human[i].age, human[i].high, human[i].birthday);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Запись с именем %s не найдена\n", searchName);
    }
}

void FindByDAge(struct Person *human, int n, int *searchAge) {
    int find = 0;
    printf("Введите минимальное число диапазона");
    scanf("%d", &minNum);
    printf("Введите максимальное число диапазона");
    scanf("%d", &maxNum);
    for (int i = 0; i < n; i++) {
        if (human[i].age >= minNum && human[i].age <= maxNum)
        {
            find = 1;
        }
        if (find == 1) {  
            printf("Запись найдена:\n");
            printf("%s, %d, %d, %.2f\n", human[i].name, human[i].age, human[i].high, human[i].birthday);
            break;
        }
    }
    if (find == 0) {
        printf("Запись из дипазона не найдена\n");
    }
}

void Save(struct Person *human, int n)
{
    int size = sizeof(struct human);
    FILE *fp = fopen("person.bin", "w");

    for (int i = 0; i < n; i++) {
        size_t count = fwrite(&human[i], size, n, fp); 
        printf("wrote %zu elements out of %d\n", count,  1);
    }
    fclose(fp);
}

void Load(struct Person *human, int n)
{ 
    for (int i = 0; i < n; i++) {
        fp = fopen("person.bin", "r");
        count = fread(&human[i], size, n, fp); 
        if(count == 1)
        {  
            printf("%s, %d, %.2f, %d\n", human[i].name, human[i].age, human[i].high, human[i].birthday);

        }
    }
    fclose(fp);
}

int Exit() {
    return 0;
}

int main()
{
    int a = 100;  
    int n = 0;          
    struct Person *human = (struct Person*)malloc(a * sizeof(struct Person));
    if (human == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }


    int *L;
    L = Load;
    int *A;
    A = AddPerson;
    int *P;
    P = PrintAll;
    int *SN;
    SN = SortByName;
    int *SA;
    SA = SortByAge;
    int *St;
    St = Statistics;
    int *S;
    S = Save;
    int *sa;
    sa = searchAge;
    int *sn;
    sn = searchName;
    int *e;
    e = Exit;
    int Menu[] = {*A, *P, *SN, *SA, *St, *sn, *sa, *S, *L, *e };
    printf("Меню:");
    printf("1. Добавить запись");
    printf("2. Вывести список");
    printf("3. Сортировка по имени:");
    printf("4. Сортировка по возрасту");
    printf("5. Статистика");
    printf("6. Поиск по имени");
    printf("7. Поиск по возрасту");
    printf("8. Сохранить");
    printf("9. Выгрузить");
    printf("10. Выход");
    printf("Ваш выбор - ");
    int choice;
    scanf("%d", choice);
    for (int i = 0; i < 11, i++)
    {
        if (choice == i)

    }
}
