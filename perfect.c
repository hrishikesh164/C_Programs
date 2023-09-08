#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    if (sum == n)
        printf("%d is a perfect number.", n);
    else
        printf("%d is not a perfect number.", n);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    perfect(n);
    return 0;
}