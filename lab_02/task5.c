#include <stdio.h>

enum Day
{
    MONDAY = 1,
    TUESDAY,
    WEDNSDAY,
    THURSDAY,
    FRIDAY,
    SUNDAY,
    SURTADAY
};

struct Info {
    enum Day day;
};

int main() {
    struct Info info_day_MONDAY = { .day = MONDAY };
    
    switch(info_day_MONDAY.day)
    {
        case MONDAY:
            printf("%d", MONDAY);
            break;
        case TUESDAY:
            printf("%d", TUESDAY);
            break;
        case WEDNSDAY:
            printf("%d", WEDNSDAY);
            break;
        case THURSDAY:
            printf("%d", THURSDAY);
            break;
        case FRIDAY:
            printf("%d", FRIDAY);
            break;
        case SUNDAY:
            printf("%d", SUNDAY);
            break;
        case SURTADAY:
            printf("%d", SURTADAY);
            break;
        default:
            return 0;
    }
}