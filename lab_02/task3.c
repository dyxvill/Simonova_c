#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Person
{
    char * name;
    struct Date dates;
};

int main() {
    struct Person people;
    people.dates.day = 05;
    people.dates.month = 12;
    people.dates.year = 2008;
    people.name = "Vika";
    if (people.dates.year > 2000)
    {
        printf("Name - %s, H.b. = %d.%d.%d", people.name, people.dates.day, people.dates.month, people.dates.year);
    }
    return 0;
}

