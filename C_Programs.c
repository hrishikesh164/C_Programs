/* 1.Addition of two numbers. */

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("The sum of the two numbers is: %d", c);
    return 0;
}

/* 2.Enter a price of an item and calculate net amount after 15% discount. */

#include <stdio.h>
int main()
{
    float price, netamount;
    printf("Enter the price of the item: ");
    scanf("%f", &price);
    netamount = price - (15 * price) / 100;
    printf("The net amount after discount is: %.2f", netamount);
    return 0;
}

/*  3.Enter a price and calculate how many currency notes will require for that amount.
    Currency notes are Five, Ten, Twenty, and Fifty Rupees. */

#include <stdio.h>
int main()
{
    int amount, five_note, ten_note, twenty_note, fifty_note;
    five_note = ten_note = twenty_note = fifty_note = 0;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    if (amount >= 50)
    {
        fifty_note = amount / 50;
        amount = amount - fifty_note * 50;
    }
    if (amount >= 20)
    {
        twenty_note = amount / 20;
        amount = amount - twenty_note * 20;
    }
    if (amount >= 10)
    {
        ten_note = amount / 10;
        amount = amount - ten_note * 10;
    }
    if (amount >= 5)
    {
        five_note = amount / 5;
        amount = amount - five_note * 5;
    }

    printf("50 rupees notes: %d \n", fifty_note);
    printf("20 rupees notes: %d\n", twenty_note);
    printf("10 rupees notes: %d\n", ten_note);
    printf("5 rupees notes: %d\n", five_note);

    return 0;
}

/* 4.Calculate the area of a triangle.  */

#include <stdio.h>
int main()
{
    int area, b, h;
    printf("Enter the breath and height of the triangle: ");
    scanf("%d %d", &b, &h);
    area = (1 * b * h) / 2;
    printf("The area of the triangle is: %d", area);
    return 0;
}

/* 5.Calculate the area and circumference of a circle. */

#include <stdio.h>

int main()
{
    float rad, area, circum;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    area = 3.14 * rad * rad;
    circum = 2 * 3.14 * rad;
    printf("The area of the circle is: %.2f \n", area);
    printf("The circumference of the circle is: %.2f \n", circum);
    return 0;
}

/* 6.Interchange two numebers without using third variable. */

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping  a = %d b = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping a = %d b = %d", a, b);
    return 0;
}

/* 7.Calculate the average of 5 numbers. */

#include <stdio.h>
int main()
{
    int a, b, c, d, e, avg;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("The average of the above 5 numbers is: %d", avg);
    return 0;
}

/* 8.Enter a number and check whether it is positive or negative. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive no.", a);
    }
    else
    {
        printf("%d is a negative no.", a);
    }
    return 0;
}

/*  9.Enter a number and check whether it is greater than or less than or
    equal to 10. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 10)
    {
        printf("%d is equal to 10", a);
    }
    else if (a > 10)
    {
        printf("%d is greater than 10", a);
    }
    else
    {
        printf("%d is less than 10", a);
    }
    return 0;
}

/* 10.Larger of two numbers. */

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is larger than %d", a, b);
    }
    else
    {
        printf("%d is larger than %d", b, a);
    }
    return 0;
}

/* 11.Largest of three numbers. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the largest among all", a);
    }
    else if (b > c)
    {
        printf("%d is the largest among all", b);
    }
    else
    {
        printf("%d is the largest among all", c);
    }
    return 0;
}

/* 12.Smaller of two numebers. */

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        printf("%d is smaller than %d", a, b);
    }
    else
    {
        printf("%d is smaller than %d", b, a);
    }
    return 0;
}

/* 13.Enter a number and display it is either even or odd. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even.", a);
    }
    else
    {
        printf("%d is odd.", a);
    }
    return 0;
}

/* 14.Enter a number and check whether it is divisible by 7 or not. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 7 == 0)
    {
        printf("%d is divisible by 7.", a);
    }
    else
    {
        printf("%d is not divisible by 7.", a);
    }
    return 0;
}

/*  15.Enter two numbers and check whether the first number is divisible by
    second number or not. */

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        printf("%d is divisible by %d", a, b);
    }
    else
    {
        printf("%d is not divisible by %d", a, b);
    }
    return 0;
}

/* 16.Enter three numbers and display the second largest number. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%d is the second largest among all.", b);
        }
        else
        {
            printf("%d is the second largest among all.", c);
        }
    }
    else if (b > c)
    {
        if (a > c)
        {
            printf("%d is the second largest among all.", a);
        }
        else
        {
            printf("%d is the second largest among all.", c);
        }
    }
    else
    {
        if (a > b)
        {
            printf("%d is the second largest among all.", a);
        }
        else
        {
            printf("%d is the second largest among all.", b);
        }
    }
    return 0;
}

/*  17.Enter a number and check to which group it will belong. The groups are
    0 - 9, 10 - 19, 20 - 29. */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a >= 0 && a <= 9)
    {
        printf("%d belongs to 0-9 group.", a);
    }
    else if (a >= 10 && a <= 19)
    {
        printf("%d belongs to 10-19 group.", a);
    }
    else if (a >= 20 && a <= 29)
    {
        printf("%d belongs to 20-29 group.", a);
    }
    else
    {
        printf("Enter a number between 0 and 29.");
    }
    return 0;
}

/* 18.Enter a character and display it either vowel or consonant. */

#include <stdio.h>
int main()
{
    char ch, lowercase, uppercase;
    printf("Enter a character: ");
    scanf("%c", &ch);
    lowercase = (ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'e');
    uppercase = (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E');
    if (lowercase || uppercase)
    {
        printf("%c is a vowel.", ch);
    }
    else
    {
        printf("%c is a consonant.", ch);
    }
    return 0;
}

/*  19.Enter marks of three subjects of a student. Calculate the percentage and
    display his result. Percentage >=60 is equal to first division and percenatage
    >= 45 is equal to second division. */

#include <stdio.h>
int main()
{
    int a, b, c;
    float perc;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &a, &b, &c);
    perc = ((a + b + c) * 100) / 300;
    if (perc >= 60)
    {
        printf("Your percentage is %.2f and you got first division.", perc);
    }
    else if (perc >= 45)
    {
        printf("Your percentage is %.2f and you got second division.", perc);
    }
    else
    {
        printf("Your percentage is %.2f", perc);
    }
    return 0;
}

/* 20.Calulate the average of any five numbers. */

#include <stdio.h>
int main()
{
    int a, b, c, d, e, avg;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("The average of the five numbers is: %d", avg);
    return 0;
}

/* 21.Calculate the average of the numbers between 1 and 20. */

#include <stdio.h>
int main()
{
    float sum = 0, avg, i;
    for (i = 1; i <= 20; i++)
    {
        sum += i;
    }
    avg = sum / 20;
    printf("The average of the numbers betweeen 1 and 20 is %.2f", avg);
    return 0;
}

/*  22.Calculate average of N numbers. The value of N will be entered from the
    keyboard */

#include <stdio.h>
int main()
{
    int n, i;
    float num, avg, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the %d number: ", i);
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / n;
    printf("Total Average is %.2f", avg);
    return 0;
}

/*  23.Calculate the average of the numbers between M and N. The value of M and N
    will be entered from the keyboard. */

#include <stdio.h>
int main()
{
    int m, n, i;
    float avg, sum = 0, count = 0;
    printf("Enter M: ");
    scanf("%d", &m);
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = m; i <= n; i++)
    {
        sum += i;
        count++;
    }
    avg = sum / count;
    printf("The average of the numbers between %d and %d is: %.2f", m, n, avg);
    return 0;
}

/*  24.Calculate the average of 10 numbers from M. Value of M will be entered from
    the keyboard. */

#include <stdio.h>
int main()
{
    int a, i;
    float sum = 0, count = 0, avg;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (i = a; i < a + 10; i++)
    {
        sum += i;
    }
    avg = sum / 10;
    printf("The average of 10 natural numbers from %d is: %.2f", a, avg);
    return 0;
}

/* 25.Calculate S = 1 + 3 + 5 + 7 + 9 + 11. (Use loop) */

#include <stdio.h>
int main()
{
    int i, sum, a;
    for (i = 1; i <= 6; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &a);
        sum += a;
    }
    printf("The value of S is: %d", sum);
    return 0;
}

/* 26.Calculate S = 1 + 3 + 5 ....... + N. */

#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter the N value: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf("The value of S is: %d", sum);
    return 0;
}

/*  27.Count the number of digits in a given number.  For example in 3217,
    four digits are there */

#include <stdio.h>
int main()
{
    int i, n, count = 0;
    printf("Enter a number: ");
    scanf("%10d", &n);
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    printf("The no. of digits is: %d", count);
    return 0;
}

/*  28.Add all digits of a nunber. For example in 3217, result will
    be (3+2+1+7)=13. */

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%10d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("The sum of the digits is %d", sum);
    return 0;
}

/*  29.Count the total even and odd digits in a given number. For example in 3217,
    there are 1 even and 3 odd digits. */

#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0, digit;
    printf("Enter an integer: ");
    scanf("%10d", &n);
    while (n != 0)
    {
        digit = n % 10;
        if (digit % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        n /= 10;
    }
    printf("The total no. of even numbers are: %d and no. of odd digits are: %d",
           even, odd);
    return 0;
}

/*  30.Check armstrong number. A armstrong number is a number in which the addtion of
    the cubic values of each digits will be same as the original number.
    For Example, 153 is an armstrong number. */

#include <stdio.h>
int main()
{
    int n, rem, result = 0, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        rem = n % 10;
        result += rem * rem * rem;
        n /= 10;
    }
    if (result == original)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
    return 0;
}

/* 31.Reverse of a number. For example, 1234 will be 4321. */

#include <stdio.h>
int main()
{
    int n, rev = 0, rem = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("The reverse of the number is: %d", rev);
    return 0;
}

/*  32.Enter a word and check whether it is palindrome or not. A palindrome is a word
    which when reversed, it remains the same. For example, refer is a palindrome
    word. */

#include <stdio.h>
#include <string.h>
int main()
{
    char word[20];
    int i, len, flag = 0;
    printf("Enter a word: ");
    scanf("%s", &word);
    len = strlen(word) - 1;
    for (i = 0; i < len; i++, len--)
    {
        if (word[i] != word[len])
        {
            printf("%s is not a palindrome.", word);
            break;
        }
        else
        {
            printf("%s is a palindrome.", word);
            break;
        }
    }
    return 0;
}

/* 33.Display the factors of a number. */

#include <stdio.h>
int main()
{
    int n, i, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factors of %d are: ", n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

/* 34.Calculate the factorial of a number. */

#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial of is %d", fact);
    return 0;
}

/*  35.Check for prime number. A prime number is a number which have no factors
    except 1 and the number itself. */

#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}

/* 36.Display smallest and largest factor of a given number. */

#include <stdio.h>
int main()
{
    int i, n, small, large;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            small = i;
            break;
        }
    }
    for (i = n / 2; i >= 2; i--)
    {
        if (n % i == 0)
        {
            large = i;
            break;
        }
    }
    printf("Smallest number: %d", small);
    printf("\nLargest number: %d", large);
    return 0;
}

/* 37.Display the numbers between 1 and 20 that have only one factor excluding
    1 and the number itself. */

#include <stdio.h>
int main()
{
    int i, n, count;
    printf("The numbers between 1 and 20 that have only one factor excluding"
           "1 and the number itself are as follows: ");
    for (n = 1; n <= 20; n++)
    {
        count = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            if (count > 1)
            {
                break;
            }
        }
        if (count == 1)
        {
            printf(" %d ", n);
        }
    }
    return 0;
}

/* 38.Display the numbers between 1 and 20 that have only two factors excluding
    1 and the number itself */

#include <stdio.h>
int main()
{
    int i, n, count;
    printf("The numbers between 1 and 20 that have only two factors excluding"
           "1 and the number itself are as follows: ");
    for (n = 1; n <= 20; n++)
    {
        count = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            if (count > 2)
            {
                break;
            }
        }
        if (count == 2)
        {
            printf(" %d ", n);
        }
    }
    return 0;
}

/* 39.Display all prime numbers 1 and 20 */

#include <stdio.h>
int main()
{
    int i, n, flag;
    printf("The prime numbers between 1 and 20 are: ");
    for (n = 2; n <= 20; n++)
    {
        flag = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf(" %d ", n);
        }
    }
    return 0;
}

/* 40.Display 10 prime numbers from 5.*/

#include <stdio.h>
int main()
{
    int n, i, flag, count = 0;
    for (n = 5; n <= 100; n++)
    {
        flag = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf(" %d ", n);
            count++;
        }
        if (count == 10)
        {
            break;
        }
    }
    return 0;
}

/* 41. Display all prime factors of a given number */

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d ", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d ", i);
        }
    }
    return 0;
}

/* 42.Display all common factors of two numbers. */

#include <stdio.h>

int main()
{
    int num1, num2, min;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);
    min = num1 < num2 ? num1 : num2;
    printf("The common factors between %d and %d are: ", num1, num2);
    for (int i = 1; i <= min; i++)
        if (num1 % i == 0 && num2 % i == 0)
            printf(" %d ", i);
    return 0;
}

/* 43. Display the largest and smallest common factor of two numbers.*/

#include <stdio.h>
int main()
{
    int num1, num2, min, max;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = num1 < num2 ? num1 : num2;
    while (1)
    {
        if (num1 % max == 0 && num2 % max == 0)
        {
            printf("Largest common factor: %d\n", max);
            break;
        }
        max--;
    }

    min = 2;
    while (1)
    {
        if (num1 % min == 0 && num2 % min == 0)
        {
            printf("Smallest common factor: %d", min);
            break;
        }
        min++;
    }
    return 0;
}

/* 44. Generate fibonacci series upto nth terms.*/

#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, t3;
    printf("Input the nth term: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
            t3 = i;
        else
        {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
        }
        printf(" %d ", t3);
    }
    return 0;
}

/* 45. Enter a number and check whether it is a fibonacci number or not.*/

#include <stdio.h>
#include <math.h>

int isPerfectSquare(int n)
{
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}

int isFibonacci(int n)
{
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if (isFibonacci(n))
        printf("%d is a Fibonacci number.", n);
    else
        printf("%d is not a Fibonacci number.", n);
    return 0;
}

/* 46. Calculate X^y using function and recursive function. */

#include <stdio.h>

int power(int x, int y) // Using function
{
    int result = 1;
    for (int i = 0; i < y; i++)
        result *= x;
    return result;
}

int recurpower(int x, int y) // Using recursion
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, y - 1);
    }
}

int main()
{
    int x, y;
    printf("Input the base X: ");
    scanf("%d", &x);
    printf("Input the power y: ");
    scanf("%d", &y);
    printf("The result of %d^%d is: %d", x, y, recurpower(x, y));
    return 0;
}

/* 47. Calculate square root of a number. */

#include <stdio.h>
#include <math.h>
int main()
{
    double num, result;
    printf("Input a number: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("The square root of %lf is %lf", num, result);
    return 0;
}

/* 48.Calculate the frequency of digits in a number.*/

#include <stdio.h>
int main()
{
    int n, digit, freq[10] = {0};
    printf("Input a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }
    printf("Digit Frequency: \n");
    for (int i = 0; i < 10; i++)
        if (freq[i] != 0)
            printf(" %d = %d\n", i, freq[i]);
    return 0;
}

/* 49. Convert a binary number into its decimal equivalent. */

#include <stdio.h>
int main()
{
    int binary;
    int decimal = 0, rem, base = 1;
    printf("Input a binary number: ");
    scanf("%d", &binary);
    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d", decimal);
    return 0;
}

/* 50. Enter a number and a base and convert the number into the given base.*/
#include <stdio.h>
int main()
{
    int num, base, i = 1, rem, temp;
    printf("Input a number: ");
    scanf("%d", &num);
    printf("Input a base(2 - 10): ");
    scanf("%d", &base);
    if (base < 2 || base > 10)
        printf("Invalid base. Input a number between 2 and 10.");
    temp = num;
    while (temp != 0)
    {
        rem = temp % base;
        temp /= base;
        num += rem * i;
        i *= 10;
    }
    printf("Number in base: %d", num);
    return 0;
}
