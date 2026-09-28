#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 4.9
    printf("SUM AND AVERAGE OF INTEGERS.\n");
    float sum = 0;
    int count, value;
    float average;
    printf("First integer is: ");
    scanf("%d", &count);
    for(int i = 1; i <= count; i++)
    {
        printf("\nEnter value: ");
        scanf("%d", &value);
        printf("\n");
        sum += value;
    }
    if (count > 0)
    {
        average = sum/count;
        printf("Average is: %.2f", average);
        printf("\n");
    }
    printf("\n");

    return 0;
}
