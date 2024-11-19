// 2022110257 오혜경
#include <stdio.h>
#define rows 4
#define cols 3

void print(int x[][cols]);

int main(void)
{
    int i, j;
    int s1[rows][cols], s2[rows][cols];

    int x[rows][cols] = {
        {46, 79, 78},
        {35, 57, 28},
        {43, 68, 76},
        {56, 78, 98}
    };

    int y[rows][cols] = {
        {78, 35, 99},
        {85, 82, 34},
        {58, 69, 29},
        {34, 59, 35}
    };

    // 두 행렬의 합 계산
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            s1[i][j] = x[i][j] + y[i][j];

    printf("\n위의 두 행렬 합의 결과값입니다.\n");
    print(s1);

    // 두 행렬의 차 계산
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            s2[i][j] = x[i][j] - y[i][j];

    printf("\n위의 두 행렬 차의 결과값입니다.\n");
    print(s2);

    return 0;
}

void print(int x[][cols])
{
    printf("------------------\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("|%4d", x[i][j]);
        printf("|\n");
    }
    printf("------------------\n");
}
