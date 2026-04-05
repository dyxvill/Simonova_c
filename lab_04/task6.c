#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int read_arr[5];
    FILE * fp = fopen("test.txt", "w");
    fwrite(arr, sizeof(int), 5, fp);
    fclose(fp);
    FILE * tp = fopen("test.txt", "r");
    fread(read_arr, sizeof(int), 5, tp);
    fclose(tp);
    printf("Прочитанный массив: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", read_arr[i]);
    }
    return 0;
}
