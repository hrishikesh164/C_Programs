/* 1.C Program to print the sum and product of digits of an integer. */
#include <stdio.h>
int main()
{
    int n, rem, sum = 0, prod = 1;
    printf("Input an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }
    printf("Sum = %d and Product = %d", sum, prod);
    return 0;
}

/* 2.C program to reverse a number*/
#include <stdio.h>
int main()
{
    int n, rem, rev = 0;
    printf("Input an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reverse is %d", rev);
    return 0;
}

/* 3.C program to compute the sum of the first n terms of the following series
     S =1 + 1/2 + 1/3 + 1/4 +...*/
#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0.0;
    printf("Input the nth term: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("Sum = %f", sum);
    return 0;
}

/*  4.C program to compute the sum of the first n terms of the following series
     S = 1-2 + 3-4 + 5-6 +....*/
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Input the nth term: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += i / 2;
        else
            sum += (i + 1) / 2;
    }
    printf("Sum = %d", sum);
    return 0;
}

/*  5.C Program to create a Function to check palindrome */
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int left = 0, right = strlen(str) - 1;
    while (left < right)
    {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Input a string: ");
    scanf("%s", &str);
    if (isPalindrome(str))
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}

/* 6.C Program to create a function to find whether a given number is prime.
   Use the same to generate the prime numbers less than 100 */

#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i;
    for (i = 2; i <= 100; i++)
        if (isPrime(i))
            printf(" %d ", i);
    return 0;
}

/* 7.C Program to compute the factors of a given number*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Input a number: ");
    scanf("%d", &n);
    printf("The Factors are: ");
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            printf(" %d ", i);
    return 0;
}

/* 8.C Program to create a Macro to swap two numbers*/

#include <stdio.h>

#define Swap(a, b)    \
    {                 \
        int temp = a; \
        a = b;        \
        b = temp;     \
    }

int main()
{
    int n1, n2;
    printf("Input two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Before swap a = %d and b = %d", n1, n2);
    Swap(n1, n2);
    printf("\nAfter swap a = %d and b = %d", n1, n2);
    return 0;
}

/* 9.C program to print a triangle of stars*/
#include <stdio.h>
int main()
{
    int i, j, k = 0, n;
    printf("Input n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++, k = 0)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}

/* 10. Write a C program to perform following actions on an array entered  by the user:
    i/ Print the even valued elements.
    ii/ Print the odd valued elements.
    iii/ Calculate and print the sum and average of the elements of the array.
    iv/ Print the maximum and minimum element of the array.
    v/ Remove the duplicates from the array.
    vi/ Print the array in reverse order.
*/

#include <stdio.h>
int main()
{
    int ar[10], n;
    int i;
    printf("Input the size: ");
    scanf("%d", &n);
    printf("Input the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for (i = 0; i < n; i++) // 1. Print the even valued elements of the array
        if (ar[i] % 2 == 0)
            printf(" %d ", ar[i]);

    for (i = 0; i < n; i++) // 1. Print the odd valued elements of the array
        if (ar[i] % 2 != 0)
            printf(" %d ", ar[i]);

    int sum = 0; // 3. To find the sum and average of the elements of the array.
    float avg = 0.0;
    for (i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    avg = (float)sum / n;
    printf("Sum = %d and Average = %f", sum, avg);

    int min, max; // 4. To print the minimum and maximum element of the array.
    min = max = ar[0];
    for (i = 0; i < n; i++)
    {
        if (min > ar[i])
            min = ar[i];
        if (max < ar[i])
            max = ar[i];
    }
    printf("Minimum = %d and Maximum = %d", min, max);

    int j, k; // 5.To remove the duplicates of an array
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (ar[i] == ar[j])
            {
                for (k = j; k < n; k++)
                    ar[k] = ar[k + 1];
                n--;
            }
            else
                j++;
        }
    }
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);

    int start = 0; // 6.To print the reverse of an array
    int end = n - 1;
    while (start < end)
    {
        int temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;
        end--;
    }
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);
    return 0;
}