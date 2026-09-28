#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 4.11
    printf("CALCULATING THE SUM OF MULTIPLES.\n");
    int num = 1, multiply;
    do
    {
        multiply = num * 7;
        num++;
        printf("%d\n", multiply);
    }
    while (num <= 100);

    return 0;
}
