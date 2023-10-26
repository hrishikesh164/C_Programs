#include <stdio.h>
struct mat
{
    int ar[10][10];
    int r, c;
};

typedef struct mat Matrix;

void read_matrix(Matrix *x)
{
    int i, j;
    printf("Input dimension of the matrix: ");
    scanf("%d %d", &x->r, &x->c);
    printf("Input elements of the matrix: ");
    for (i = 0; i < x->r; i++)
        for (j = 0; j < x->c; j++)
            scanf("%d", &x->ar[i][j]);
}

void print_matrix(Matrix *x)
{
    int i, j;
    for (i = 0; i < x->r; i++)
    {
        for (j = 0; j < x->c; j++)
            printf(" %d ", x->ar[i][j]);
        printf("\n");
    }
}

Matrix add_matrix(Matrix x, Matrix y) // Matrix addition
{
    Matrix result;
    int i, j;
    if (x.r != y.r || x.c != y.c)
    {
        result.r = result.c = 0;
        return result;
    }
    else
    {
        result.r = x.r;
        result.c = x.c;
        for (i = 0; i < x.r; i++)
            for (j = 0; j < x.c; j++)
                result.ar[i][j] = x.ar[i][j] + y.ar[i][j];
        return result;
    }
}

Matrix sub_matrix(Matrix x, Matrix y) // Matrix subtraction
{
    Matrix result;
    int i, j;
    if (x.r != y.r || x.c != y.c)
    {
        result.r = result.c = 0;
        return result;
    }
    else
    {
        result.r = x.r;
        result.c = x.c;
        for (i = 0; i < x.r; i++)
            for (j = 0; j < x.c; j++)
                result.ar[i][j] = x.ar[i][j] - y.ar[i][j];
        return result;
    }
}

Matrix mul_matrix(Matrix x, Matrix y) // Matrix multiplication
{
    Matrix result;
    int i, j, k;
    if (x.r != y.r || x.c != y.c)
    {
        result.r = result.c = 0;
        return result;
    }
    else
    {
        result.r = x.r;
        result.c = x.c;
        for (i = 0; i < x.r; i++)
        {
            for (j = 0; j < x.c; j++)
            {
                result.ar[i][j] = 0;
                for (k = 0; k < x.c; k++)
                    result.ar[i][j] += x.ar[i][k] * y.ar[k][j];
            }
        }
        return result;
    }
}

Matrix sca_matrix(Matrix x, int n) // Scalar matrix multiplication
{
    Matrix result;
    int i, j;
    result.r = x.r;
    result.c = x.c;
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[i][j] = n * x.ar[i][j];
    return result;
}

Matrix trans_matrix(Matrix x) // Transpose of a matrix
{
    Matrix result;
    int i, j;
    result.r = x.r;
    result.c = x.c;
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[j][i] = x.ar[i][j];
    return result;
}

void upper_triangular(Matrix x) // check for upper triangular matrix
{
    Matrix result;
    int i, j, isUpper = 1;
    result.r = x.r;
    result.c = x.c;
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[i][j] = x.ar[i][j];
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            if (j < i && result.ar[i][j] != 0)
                isUpper = 0;
    if (isUpper == 1)
        printf("The matrix is Upper traingular matrix.");
    else
        printf("The matrix is not Upper traingular matrix.");
}

void symmetric_matrix(Matrix x) // check whether a matrix is symmetric or not
{
    Matrix result;
    int i, j, isSymmetric = 1;
    result.r = x.r;
    result.c = x.c;
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[j][i] = x.ar[i][j];
    for (i = 0; i < x.r && isSymmetric; i++)
        for (j = 0; j < x.c; j++)
            if (result.ar[i][j] != x.ar[i][j])
            {
                isSymmetric = 0;
                break;
            }
    if (isSymmetric == 1)
        printf("The Matrix is Symmetric.");
    else
        printf("The Matrix is not Symmetric.");
}

void isUnit_matrix(Matrix x) // check whether a matrix is unit or not
{
    Matrix result;
    int i, j, isUnit = 1;
    result.r = x.r;
    result.c = x.c;
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[j][i] = x.ar[i][j];
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
        {
            if (i == j && result.ar[i][j] != 1)
                isUnit = 0;
            else if (i != j && result.ar[i][j] != 0)
                isUnit = 0;
        }
    if (isUnit == 1)
        printf("The matrix is an unit matrix.");
    else
        printf("The matrix is not an unit matrix.");
}

Matrix inverse_matrix(Matrix x) // Inverse of a matrix
{
    Matrix result;
    int i, j;
    float det = 0;
    result.r = x.r;
    result.c = x.c;
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[i][j] = x.ar[i][j];
    for (i = 0; i < 3; i++)
        det += (result.ar[0][i] * (result.ar[1][(i + 1) % 3] * result.ar[2][(i + 2) % 3] - result.ar[1][(i + 2) % 3] * result.ar[2][(i + 1) % 3]));
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[i][j] = ((result.ar[(j + 1) % 3][(i + 1) % 3] * (result.ar[(j + 2) % 3][(i + 2) % 3] - result.ar[(j + 1) % 3][(i + 2) % 3] * result.ar[(j + 2) % 3][(i + 1) % 3])) / det);
    return result;
}

int determinant_matrix(Matrix x) // Determinant of a square matrix (2 x 2)
{
    Matrix result;
    int i, j, det;
    result.r = x.r;
    result.c = x.c;
    for (i = 0; i < x.r; i++)
        for (j = 0; j < x.c; j++)
            result.ar[i][j] = x.ar[i][j];
    det = (result.ar[0][0] * result.ar[1][1]) - (result.ar[0][1] * result.ar[1][0]);
    return det;
}

int main()
{
    Matrix a, b, c;
    int d;
    // int n;
    // printf("Input the multiplier: ");
    // scanf("%d", &n);
    read_matrix(&a);
    // read_matrix(&b);
    c = inverse_matrix(a);
    printf("The resultant of the above matrix is: \n");
    print_matrix(&c);
    return 0;
}