#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define PO(X) ((X) * (X))         // 제곱 계산 매크로
#define AREA(R) ((PO(R)) * (PI))  // 원의 면적 계산 매크로

struct point
{
    double xary; // x 좌표
    double yary; // y 좌표
};

struct circle
{
    struct point cor; // 원의 중심
    double radius;    // 반지름
};

int main()
{
    double data1 = 0, data2 = 0, data3 = 0;

    printf("원 중심좌표 >> ");
    scanf("%lf %lf", &data1, &data2);

    printf("반지름 길이 >> ");
    scanf("%lf", &data3);

    struct circle ary = {{data1, data2}, data3};

    printf("원 중심 좌표: (%.2lf, %.2lf), 반지름: %.2lf\n", ary.cor.xary, ary.cor.yary, ary.radius);
    printf("원 면적: %.2lf\n", AREA(ary.radius));

    return 0;
}
