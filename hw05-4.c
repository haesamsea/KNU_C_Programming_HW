// 2022110257 오혜경
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year;

    printf("년도를 입력하시오: ");
    scanf("%d", &year);

    // 윤년 판별 조건
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d년은 윤년입니다.\n", year);
    }
    else
    {
        printf("%d년은 평년입니다.\n", year);
    }

    return 0;
}
