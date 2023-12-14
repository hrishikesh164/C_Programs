#include <stdio.h>
#include <math.h>

int bintodec(long int n)
{
    int dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}

int main()
{
    long int n;
    printf("Input a binary number: ");
    scanf("%ld", &n);
    printf("%d in binary = %d in decimal", n, bintodec(n));
    return 0;
}