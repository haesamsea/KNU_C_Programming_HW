// 2022110257 오혜경
#include <stdio.h>

int main()
{
    printf("다음 표의 세로와 가로항, 그리고 모든 항을 구합니다.\n");
    printf("---------------------------------------------------\n");

    int a[4][4] = {
        {78, 48, 78, 98},
        {99, 92, 83, 29},
        {29, 64, 83, 89},
        {34, 78, 92, 56}
    };

    int sum = 0, sume = 0, sumf = 0, sumg = 0, sumh = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("|%3d ", a[i][j]);
        }
        printf("|\n");
    }

    printf("------------------------------------------------------\n");

    printf("위 표의 세로와 가로합, 그리고 모든 항을\n각각 행과 열의 마지막에 구합니다.\n");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("|%3d ", a[i][j]);
            sum += a[i][j];
        }
        printf("| %3d |\n", sum); // 행의 합 출력
        sum = 0;
    }

    // 각 열의 합 계산
    for (int j = 0; j < 4; j++) sume += a[j][0];
    for (int j = 0; j < 4; j++) sumf += a[j][1];
    for (int j = 0; j < 4; j++) sumg += a[j][2];
    for (int j = 0; j < 4; j++) sumh += a[j][3];

    printf("|%3d |%3d |%3d |%3d | %3d |\n", sume, sumf, sumg, sumh, sume + sumf + sumg + sumh);
    printf("------------------------------------------------------\n");

    return 0;
}
