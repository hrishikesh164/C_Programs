#include <stdio.h>
#include <math.h>
int main()
{
    int n, last, first, count = 0, temp;
    printf("Input a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    last = n % 10;
    first = n / pow(10, count - 1);
    n /= 10;
    n = n % (int)pow(10, count - 2);
    n = n * 10 + first;
    n = last * pow(10, count - 1) + n;
    printf("The result is: %d", n);
    return 0;
}