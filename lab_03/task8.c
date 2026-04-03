#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;  
    int size = 0;     
    int choice;
    int n, index; 
    while (1) { 
        printf("\nМеню:");
        printf("\n1. Добавить элемент\n");
        printf("2. Удалить элемент\n");
        printf("3. Вывести список\n");
        printf("4. Изменить размер массива\n");
        printf("0. Выход\n");
        printf("Ваш выбор - ");
        scanf("%d", &choice);
        
        switch (choice) 
        {
            case 0:
                free(arr);
                return 0;
                
            case 1:
                printf("Введите число для добавления - ");
                scanf("%d", &n);
                size++;
                arr = (int*)realloc(arr, size * sizeof(int));
                arr[size - 1] = n;
                printf("Элемент добавлен\n");
                break;
                
            case 2: 
                if (size == 0) 
                {
                    printf("Массив пустой\n");
                    break;
                }
                
                printf("Введите индекс элемента для удаления - ");
                scanf("%d", &index);
                
                if (index < 0 || index >= size) 
                {
                    printf("Неверный индекс\n");
                    break;
                }
                
                for (int i = index; i < size - 1; i++) 
                {
                    arr[i] = arr[i + 1];
                }
                
                size--;
                arr = (int*)realloc(arr, size * sizeof(int));
                printf("Элемент удалён\n");
                break;
                
            case 3:  
                if (size == 0) 
                {
                    printf("Массив пустой\n");
                } 
                else 
                {
                    printf("Список чисел: ");
                    for (int i = 0; i < size; i++) 
                    {
                        printf("%d ", arr[i]);
                    }
                }
                break;
                
            case 4: 
                printf("Текущий размер: %d\n", size);
                printf("Введите новый размер: ");
                int newsize;
                scanf("%d", &newsize);
                
                if (newsize < 0) 
                {
                    printf("Размер не может быть отрицательным\n");
                    break;
                }
                
                if (newsize == size) 
                {
                    printf("Размер не изменился\n");
                    break;
                }
                
                int oldsize = size;
                
                arr = (int*)realloc(arr, newsize * sizeof(int));
                if (arr == NULL && newsize > 0) 
                {
                    break;
                }
                
                if (newsize > oldsize) 
                {
                    for (int i = oldsize; i < newsize; i++) 
                    {
                        printf("Введите элемент %d: ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                
                size = newsize;
                printf("Размер массива изменён на %d\n", size);
                break;
                
            default:
                printf("Неверный выбор\n");
        }
    }
    
    return 0;
}