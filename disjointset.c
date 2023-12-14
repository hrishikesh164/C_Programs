#include <stdio.h>

int disjoint(int set1[], int set2[], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            if (set1[i] == set2[j])
                return 0;
    return 1;
}

int main()
{
    int n1, n2, set1[10], set2[10], i, j;
    printf("Input the size of set 1: ");
    scanf("%d", &n1);
    printf("Input the size of set 2: ");
    scanf("%d", &n2);
    printf("Enter the elements of set1: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &set1[i]);
    printf("Enter the elements of set2: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &set2[i]);
    if (disjoint(set1, set2, n1, n2))
        printf("It is a disjoint set.");
    else
        printf("It is not a disjoint set.");
    return 0;
}