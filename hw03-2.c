#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, result;

    printf("x의 값을 실수로 입력하시오: ");
    scanf_s("%f", &x);

    result = 3 * pow(x, 3) - 7 * 7.8 * 7.8 + 9;

    printf("다항식의 값은 %7.3f입니다.", result);

    return 0;
}
