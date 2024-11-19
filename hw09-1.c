// 2022110257 오혜경
#include <stdio.h>
#define ROWSIZE 5
#define COLSIZE 4

int main()
{
    int score[ROWSIZE][COLSIZE] = {
        {97, 90, 88, 95},
        {76, 89, 75, 83},
        {60, 70, 88, 82},
        {83, 89, 92, 85},
        {75, 73, 72, 78}
    };

    printf("이름 중간 중간 기말 기말\n");
    printf("================================\n");

    for (int i = 0; i < ROWSIZE; i++)
    {
        if (i == 0) printf("이현수 ");
        else if (i == 1) printf("김기수 ");
        else if (i == 2) printf("김범용 ");
        else if (i == 3) printf("장기태 ");
        else printf("이명수 ");

        int sum = 0;
        for (int j = 0; j < COLSIZE; j++)
        {
            printf("%d ", score[i][j]);
            sum += score[i][j]; // 합계 계산
        }

        printf("%d ", sum);         // 합계 출력
        printf("%.2f ", sum / 4.0); // 평균 출력
        printf("\n");
    }

    return 0;
}
