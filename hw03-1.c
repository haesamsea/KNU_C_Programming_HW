#include <stdio.h>

int main(void)
{
    int ww = 28;
    double nn = 3.305785;

    printf("평수를 입력하시오: %d\n", ww);
    printf("%-3d평은 %5.3f 제곱미터입니다", ww, (ww * nn));

    return 0;
}
