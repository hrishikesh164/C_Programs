#include <stdio.h>
int main()
{
    int a, b, i, sum1, sum2;
    sum1 = sum2 = 0;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    for (i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            sum1 += i;
        }
    }
    for (i = 1; i <= b / 2; i++)
    {
        if (b % i == 0)
        {
            sum2 += i;
        }
    }
    if (sum1 == b && sum2 == a)
    {
        printf("It is an amicable number.");
    }
    else
    {
        printf("It is not an amicable number.");
    }
    return 0;
}