#include <stdio.h>

int main() {
    int a = 5;
    
    printf("Исходное a = %d\n", a);
    printf("a = %d\n", a++);
    printf("После a++ значение стало: %d\n", a);
    
    a = 5;
    printf("\nСбросили a = %d\n", a);
    printf("После ++a значение стало = %d\n", ++a);
    
    a = 5;
    printf("\nСбросили a = %d\n", a);
    printf("a = %d\n", a--);
    printf("После a-- значение стало: %d\n", a);
    
    a = 5;
    printf("\nСбросили a = %d\n", a);
    printf("После --a значение стало = %d\n", --a);
    
    return 0;
}
 
