#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double A, B;
    double d;

    printf("2차방정식의 계수 a, b, c를 입력하시오: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4.0 * a * c;

    if (d > 0) // 두 실근
    {
        A = (-b + sqrt(d)) / (2.0 * a);
        B = (-b - sqrt(d)) / (2.0 * a);
        printf("근은 두 개의 실근 %lf, %lf 입니다.\n", A, B);
    }
    else if (d == 0) // 중근
    {
        A = -b / (2.0 * a);
        printf("근은 중근 %lf 입니다.\n", A);
    }
    else // 허근
    {
        A = -b / (2.0 * a);
        B = sqrt(fabs(d)) / (2.0 * a); // 허근 계산
        if (A == 0)
            printf("근은 허근 %lfi, %lfi 을 가집니다.\n", B, -B);
        else
            printf("근은 두 개의 허근 %lf%+lfi, %lf%+lfi 를 가집니다.\n", A, B, A, -B);
    }

    return 0;
}
