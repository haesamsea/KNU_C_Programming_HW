#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return (double)a / b;
}

int main()
{
    int n, m;
    int choice;

    while (1) 
    {
        printf("**********************************\n");
        printf("* 1. 덧셈 *\n");
        printf("* 2. 뺄셈 *\n");
        printf("* 3. 곱셈 *\n");
        printf("* 4. 나눗셈 *\n");
        printf("* 5. 종료 *\n");
        printf("**********************************\n");

        printf("메뉴를 선택하세요: ");
        scanf("%d", &choice);

        if (choice == 5)
            break;

        printf("두 수를 입력하세요: ");
        scanf("%d %d", &n, &m);

        if (choice == 1)
            printf("%d + %d = %d\n", n, m, add(n, m));
        else if (choice == 2)
            printf("%d - %d = %d\n", n, m, subtract(n, m));
        else if (choice == 3)
            printf("%d * %d = %d\n", n, m, multiply(n, m));
        else if (choice == 4)
            printf("%d / %d = %.2lf\n", n, m, divide(n, m));
    }

    return 0;
}
