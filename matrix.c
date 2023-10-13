#include <stdio.h>

struct matrix
{
    int ar[10][10];
    int r, c;
};

typedef struct matrix Matrix;

void add_matrix(Matrix x, Matrix y)
{
    Matrix z;
    int i, j;
    printf("Input dimension of the first matrix: ");
    scanf("%d %d", &x.r, &x.c);
    printf("Input dimension of the second matrix: ");
    scanf("%d %d", &y.r, &y.c);
    if (x.r == y.r && x.c == y.c)
    {
        printf("Input elements of the first array: ");
        for (i = 0; i < x.r; i++)
            for (j = 0; j < x.c; j++)
                scanf("%d", &x.ar[i][j]);
        printf("\nInput elements of the second array: ");
        for (i = 0; i < y.r; i++)
            for (j = 0; j < y.c; j++)
                scanf("%d", &y.ar[i][j]);
        for (i = 0; i < x.r; i++)
            for (j = 0; j < x.c; j++)
                z.ar[i][j] = x.ar[i][j] + y.ar[i][j];
        printf("\n The sum of the above two matrices is: \n");
        for (i = 0; i < x.r; i++)
        {
            for (j = 0; j < x.c; j++)
                printf(" %d ", z.ar[i][j]);
            printf("\n");
        }
    }
    else
        return NULL;
}

int main()
{
    Matrix a, b;
    add_matrix(a, b);
    return 0;
}