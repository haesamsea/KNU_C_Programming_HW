#include <stdio.h>

#define SQ2(x) ((x) * (x))
#define SQ4(x) ((x) * (x) * (x) * (x))

int main(void)
{
    float x = 3.0;

    printf("x의 값을 실수로 입력하시오: %2.1f\n", x);
    printf("x의 제곱은 %2.1f입니다.\n", SQ2(x));
    printf("x의 네제곱은 %2.1f입니다.", SQ4(x));

    return 0;
}
