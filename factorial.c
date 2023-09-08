#include <stdio.h>

int fact(int n)
{
    int fac = 1, i;
    for (i = 1; i <= n; i++)
        fac *= i;
    return fac;
}

int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = fact(n);
    printf("The factorial of %d is: %d", n, result);
    return 0;
}