#include <stdio.h>
int main() {
    for (int i = 0; i <= 10; i++ )
    {
        for (int c = 1; c <= 10; c++)
        {
            if (c * i > 50) continue;
            {
            printf("% d * %d = %d \n", c, i, c * i);
            }
        }
    }
    return 0;
}