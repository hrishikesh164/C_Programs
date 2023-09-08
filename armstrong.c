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
    if (sum == i)
        printf("%d is an armstrong number", n);
    else
        printf("%d is an armstrong number", n);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}