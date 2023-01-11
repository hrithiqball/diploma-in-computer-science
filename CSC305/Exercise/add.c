#include <stdio.h>

int main()
{
    int num1, num2, num3, total;
    float average;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("Enter a number: ");
    scanf("%d", &num3);

    total = num1 + num2 + num3;
    average = (float)(total) / 3;
    printf("The total is %d and the average is %.2f", total, average);

    return 0;
}