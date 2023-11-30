/* 1. Bubble Sort */
#include <stdio.h>

void bubblesort(int ar[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int ar[10], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    bubblesort(ar, n);
    printf("The sorted elements are: ");
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);
    return 0;
}

/* 2. Selection Sort */
#include <stdio.h>

void selectionsort(int ar[], int size)
{
    int i, j, temp, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
            if (ar[j] < ar[min])
                min = j;
        temp = ar[i];
        ar[i] = ar[min];
        ar[min] = temp;
    }
}

int main()
{
    int ar[10], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    selectionsort(ar, n);
    printf("The sorted elements are: ");
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);
    return 0;
}

/* 3.Insertion Sort */
#include <stdio.h>

void insertionsort(int ar[], int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = key;
    }
}

int main()
{
    int ar[10], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    insertionsort(ar, n);
    printf("The sorted elements are: ");
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);
    return 0;
}
