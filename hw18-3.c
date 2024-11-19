#include <stdio.h>

void pascaltriangle(int (*p)[100], int size);
void triangleprint(int (*p)[100], int size);

int main()
{
    int arr[100][100] = {0};
    int n = 9;

    pascaltriangle(arr, n + 1);
    triangleprint(arr, n + 1);

    return 0;
}

void pascaltriangle(int (*p)[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        p[i][0] = 1; // 각 행의 첫 번째 값은 1
        for (int j = 1; j <= i; j++)
            p[i][j] = p[i - 1][j - 1] + p[i - 1][j]; // 파스칼 삼각형 값 계산
    }
}

void triangleprint(int (*p)[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%4d ", p[i][j]); // 각 값을 출력
        printf("\n");
    }
}
