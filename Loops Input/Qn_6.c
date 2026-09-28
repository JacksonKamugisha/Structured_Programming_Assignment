#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 4.19
    int choice, quantity;
    float total = 0, R_price;
    printf("CALCULATING SALES.\n");
    int num = 0;
    while (num<1)
        {
        printf("\nEnter product number: ");
        scanf("%d", &choice);
        printf("\nEnter quantity number: ");
        scanf("%d", &quantity);
        switch (choice)
            {
            case 0:
                num +=1;
                break;

            case 1:
                R_price = 2.98;
                total = quantity * R_price;
                printf("\nTotal Retail Value of all products sold last week is $%.2f\n", total);
                break;

            case 2:
                R_price = 4.5;
                total = quantity * R_price;
                printf("\nTotal Retail Value of all products sold last week is $%.2f\n", total);
                break;

            case 3:
                R_price = 9.98;
                total = quantity * R_price;
                printf("\nTotal Retail Value of all products sold last week is $%.2f\n", total);
                break;

            case 4:
                R_price = 4.49;
                total = quantity * R_price;
                printf("\nTotal Retail Value of all products sold last week is $%.2f\n", total);
                break;

            case 5:
                R_price = 6.87;
                total = quantity * R_price;
                printf("\nTotal Retail Value of all products sold last week is $%d\n", total);
                break;

            default:
                printf("\nOut of input range!\n");
                num += 1;
            }
        }

    return 0;
}
