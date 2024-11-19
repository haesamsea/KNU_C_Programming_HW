#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    struct fraction
    {
        int son; // 분자
        int mom; // 분모
    };

    struct fraction f1, f2;
    int result1 = 0, result2 = 0;

    printf("a 분자/분모 입력: ");
    scanf("%d %d", &f1.son, &f1.mom);

    printf("b 분자/분모 입력: ");
    scanf("%d %d", &f2.son, &f2.mom);

    result1 = f1.son * f2.son; // 분자 곱하기
    result2 = f1.mom * f2.mom; // 분모 곱하기

    printf("a = %d/%d\n", f1.son, f1.mom);
    printf("b = %d/%d\n", f2.son, f2.mom);
    printf("c = a * b = %d/%d\n", result1, result2);

    return 0;
}
