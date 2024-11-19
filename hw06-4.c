#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;
    double sum = 0;
    int max = 0;

    printf("성적 입력을 마치려면 음수를 입력하시오.\n");
    printf("성적을 입력하시오.\n");

    do
    {
        scanf("%d", &x);

        if (x >= 0)
        {
            sum += x;
            max++;
        }
        else
        {
            break;
        }

    } while (x >= 0);

    printf("%d명의 평균은 %lf", max, sum / (double)max);

    return 0;
}
