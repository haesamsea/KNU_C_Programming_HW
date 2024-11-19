#include <stdio.h>
#include <stdarg.h>

double vagunc(char* type, int count, ...);

int main(void)
{
    printf("평균 %.2f\n", vagunc("d", 5, 172, 21, 36, 43, 58));
    printf("평균 %.2f\n", vagunc("f", 5, 5.8, 17.3, 2.8, 31.8, 45.9));

    return 0;
}

double vagunc(char* type, int count, ...)
{
    int total1 = 0;
    double total2 = 0;

    va_list argp;
    va_start(argp, count);

    if (*type == 'd') // 정수 타입
    {
        for (int i = 0; i < count; i++)
            total1 += va_arg(argp, int);
        va_end(argp);
        return total1 / (double)count;
    }
    else if (*type == 'f') // 실수 타입
    {
        for (int i = 0; i < count; i++)
            total2 += va_arg(argp, double);
        va_end(argp);
        return total2 / count;
    }

    va_end(argp);
    return 0.0; // 기본 반환
}
