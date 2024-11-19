#include <stdio.h>

void multiply(double mat1[][3], double mat2[][2], double result[][2], int row1, int col1, int col2);
void display(double mat[][2], int row, int col);

int main()
{
    double value1[][3] = {{4.2, 4.3, 3.8}, {3.7, 1.5, 0.7}};
    double value2[][2] = {{5.2, 2.1}, {3.2, 1.4}, {1.5, 3.6}};
    double result[2][2] = {0};

    multiply(value1, value2, result, 2, 3, 2);
    printf("행렬 곱의 결과:\n");
    display(result, 2, 2);

    return 0;
}

void multiply(double mat1[][3], double mat2[][2], double result[][2], int row1, int col1, int col2)
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

void display(double mat[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%.2lf  ", mat[i][j]);
        printf("\n");
    }
}
