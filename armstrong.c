#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, deno, i;
    i = n;
    while (i != 0)
    {
        deno = i % 10;
        sum += deno * deno * deno;
        i /= 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
        printf("%d is an armstrong number", n);
    else
        printf("%d is not an armstrong number", n);
    return 0;
}
