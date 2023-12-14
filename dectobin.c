#include <stdio.h>
#include <math.h>

long dectobin(int n)
{
    long int bin = 0;
    int rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main()
{
    int n;
    printf("Input a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %ld in decimal", n, dectobin(n));
    return 0;
}