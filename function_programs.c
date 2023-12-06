/* 1. Write a C program to check for prime number. */

#include <stdio.h>

int isPrime(int n)
{
    int i, flag = 0;
    if (n == 0 || n == 1)
        flag = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}

/* 2. Write a C program to check for perfect number. */

#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if (perfect(n))
        printf("%d is a perfect number.", n);
    else
        printf("%d is not a perfect number.", n);
    return 0;
}

/* 3. Write a C program to check for armstrong number. */

#include <stdio.h>

int armstong(int n)
{
    int num, rem, result = 0;
    num = n;
    while (num != 0)
    {
        rem = num % 10;
        result += rem * rem * rem;
        num /= 10;
    }
    if (result == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if (armstong(n))
        printf("%d is an armstong number.", n);
    else
        printf("%d is not an armstong number.", n);
    return 0;
}

/* 4. Write a C program to check for amicable numbers. */

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
    if (sum1 == b && sum2 == a)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);
    if (amicable(a, b))
        printf("%d and %d are amicable numbers.", a, b);
    else
        printf("%d and %d are not amicable numbers.", a, b);
    return 0;
}

/* 5. Write a C program to calculate the sum and product of the digits of an integer. */

#include <stdio.h>

void sumproduct(int n, int *sum, int *prod)
{
    int num, rem;
    *sum = 0, *prod = 1;
    num = n;
    while (num != 0)
    {
        rem = num % 10;
        *sum += rem;
        *prod *= rem;
        num /= 10;
    }
}

int main()
{
    int n, sum, prod;
    printf("Input a number: ");
    scanf("%d", &n);
    sumproduct(n, &sum, &prod);
    printf("The sum and product of %d are %d and %d", n, sum, prod);
    return 0;
}

/* 6. Write a C program to print fibonacci series using recursion and iteration. */

#include <stdio.h>

int fiborecurive(int n) // Recursion
{
    if (n <= 1)
        return n;
    else
        return fiborecurive(n - 1) + fiborecurive(n - 2);
}

int fiboiteration(int n) // Iteration
{
    int i, a = 0, b = 1, c;
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n, i;
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    printf("The series is: ");
    for (i = 0; i <= n; i++)
        printf(" %d ", fiborecurive(i));
    return 0;
}

/* 7. Write a C program to find GCD of two numbers using recursion and iteration. */

#include <stdio.h>

int gcdrecursive(int a, int b) // Recursion
{
    int t;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    else if (b % a == 0)
        return a;
    else
        return (gcdrecursive(b % a, a));
}

int gcditeration(int a, int b) // Iteration
{
    int i, gcd;
    for (i = 1; i <= a && i <= b; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    return gcd;
}

int main()
{
    int a, b;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    printf(" %d ", gcdrecursive(a, b));
    return 0;
}

/* 8. Write a C program to print the factors of number using recursion and iteration. */

#include <stdio.h>

int faciteration(int n) // Iteration
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int facrecursive(int n) // Recursion
{
    if (n == 0)
        return 1;
    else
        return n * facrecursive(n - 1);
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    printf("The factorial of %d is: ", n);
    printf("%d", facrecursive(n));
    return 0;
}

/* 9. Write a C program to swap values of two variables. */

#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a, b;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The values before swap are: ");
    printf(" a = %d and b = %d", a, b);
    swap(&a, &b);
    printf("\nThe values after swap are: ");
    printf(" a = %d and b = %d", a, b);
    return 0;
}

/* 10. Write a C program to print the even valued elements of an arary. */

#include <stdio.h>

int evenelements(int ar[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        if (ar[i] % 2 == 0)
            printf(" %d ", ar[i]);
}

int main()
{
    int ar[20], size, i;
    printf("Enter the size of the array(max. 20): ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    printf("The even elements of the array are: ");
    evenelements(ar, size);
    return 0;
}

/* 11. Write a C program to print the odd valued elements of an arary. */

#include <stdio.h>

int oddelements(int ar[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        if (ar[i] % 2 != 0)
            printf(" %d ", ar[i]);
}

int main()
{
    int ar[20], size, i;
    printf("Enter the size of the array(max. 20): ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    printf("The odd elements of the array are: ");
    oddelements(ar, size);
    return 0;
}

/* 12. Write a C program to print the odd valued elements of an arary. */

#include <stdio.h>

int minmax(int ar[], int size)
{
    int i, min, max;
    min = max = ar[0];
    for (i = 0; i < size; i++)
    {

        if (min > ar[i])
            min = ar[i];
        if (max < ar[i])
            max = ar[i];
    }
    printf("Min = %d and Max = %d", min, max);
}

int main()
{
    int ar[20], size, i;
    printf("Enter the size of the array(max. 20): ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    minmax(ar, size);
    return 0;
}

/* 13. Write a C program to remove the duplicate elements of an arary. */

#include <stdio.h>

int removeduplicate(int ar[], int size)
{
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size;)
            if (ar[i] == ar[j])
            {
                for (k = j; k < size - 1; k++)
                    ar[k] = ar[k + 1];
                size--;
            }
            else
                j++;
    }
}

int main()
{
    int ar[20], size, i, updatedsize;
    printf("Enter the size of the array(max. 20): ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    updatedsize = removeduplicate(ar, size);
    printf("The new array elements are: ");
    for (i = 0; i < updatedsize; i++)
        printf(" %d ", ar[i]);
    return 0;
}

/* 14. Write a C program to reverse an arary. */

#include <stdio.h>

int reverse(int ar[], int size)
{
    int temp, i;
    for (i = 0; i < size / 2; i++)
    {
        temp = ar[i];
        ar[i] = ar[size - 1 - i];
        ar[size - 1 - i] = temp;
    }
}

int main()
{
    int ar[20], size, i;
    printf("Enter the size of the array(max. 20): ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    printf("The Orginnal array is: ");
    for (i = 0; i < size; i++)
        printf(" %d ", ar[i]);
    reverse(ar, size);
    printf("\nThe reverse of the array is: ");
    for (i = 0; i < size; i++)
        printf(" %d ", ar[i]);
    return 0;
}

/* 15. Write a C program to find the sum and average of an arary. */

#include <stdio.h>

int sumavg(int ar[], int size)
{
    int i, sum = 0;
    float avg;
    for (i = 0; i < size; i++)
        sum += ar[i];
    avg = (float)sum / size;
    printf("Sum = %d and Average = %f", sum, avg);
}

int main()
{
    int ar[20], size, i, updatedsize;
    printf("Enter the size of the array(max. 20): ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    sumavg(ar, size);
    return 0;
}
