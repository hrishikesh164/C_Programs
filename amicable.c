#include <stdio.h>

int amicable(int a, int b)
{
    int i, sum1, sum2;
    sum1 = sum2 = 0;
    for (i = 1; i <= a / 2; i++)
        if (a % i == 0)
            sum1 += i;
    for (i = 1; i <= b / 2; i++)
        if (b % i == 0)
            sum2 += i;
    if (a == sum2 && b == sum1)
        printf("%d and %d are amicable numebers.", a, b);
    else
        printf("%d and %d are not amicable numebers.", a, b);
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    amicable(a, b);
    return 0;
}