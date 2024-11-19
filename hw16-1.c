#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct ri
{
    double r; // 실수 부분
    double i; // 허수 부분
};

double plus(double a, double b);
double minus(double a, double b);
double mult(double a, double b);
double absolute(double a, double b);

int main()
{
    struct ri f1, f2;

    printf("두 개의 복소수를 입력하세요.\n");
    printf("첫번째 복소수 입력 (실수 허수): ");
    scanf("%lf %lf", &f1.r, &f1.i);

    printf("두번째 복소수 입력 (실수 허수): ");
    scanf("%lf %lf", &f2.r, &f2.i);
    puts("");

    printf("덧셈: (%.2lf + %.2lfi) + (%.2lf + %.2lfi) = (%.2lf + %.2lfi)\n",
           f1.r, f1.i, f2.r, f2.i,
           plus(f1.r, f2.r), plus(f1.i, f2.i));

    printf("뺄셈: (%.2lf + %.2lfi) - (%.2lf + %.2lfi) = (%.2lf + %.2lfi)\n",
           f1.r, f1.i, f2.r, f2.i,
           minus(f1.r, f2.r), minus(f1.i, f2.i));

    printf("곱셈: (%.2lf + %.2lfi) * (%.2lf + %.2lfi) = (%.2lf + %.2lfi)\n",
           f1.r, f1.i, f2.r, f2.i,
           mult(f1.r, f2.r) - mult(f1.i, f2.i),
           mult(f1.r, f2.i) + mult(f1.i, f2.r));

    printf("절댓값 |(%.2lf + %.2lfi)| = %.4lf, |(%.2lf + %.2lfi)| = %.4lf\n",
           f1.r, f1.i, absolute(f1.r, f1.i),
           f2.r, f2.i, absolute(f2.r, f2.i));

    return 0;
}

double plus(double a, double b)
{
    return a + b;
}

double minus(double a, double b)
{
    return a - b;
}

double mult(double a, double b)
{
    return a * b;
}

double absolute(double a, double b)
{
    return sqrt(a * a + b * b);
}
