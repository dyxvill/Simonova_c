#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float sr_b;
};

int main() {
    struct Student students[5] = { {"masha", 18, 9.1}, {"kristina", 17, 9.0}, {"sasha", 18, 9.5}, {"eva", 19, 8.9}, {"ksusha", 17, 8.7} };
    int N = sizeof(students) / sizeof(students[0]);
    float max_srb = 0.00;
    for (int i = 0; i < N; i++)
    {
        printf("Name - %s, Age - %d, Sredniy ball - %0.2f\n", students[i].name, students[i].age, students[i].sr_b);
        if(students[i].sr_b > max_srb)
        {
            max_srb = students[i].sr_b;
        }
    }
    printf("Maksimalnui sredniy ball - %.2f", max_srb);
}