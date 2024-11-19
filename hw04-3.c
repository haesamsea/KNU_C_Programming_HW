#include <stdio.h>

int main(void)
{
    int a = 5, b = 10, c = 15, d = 20;
    int result;

    printf("%d\n", a + --b);
    printf("%d\n", a && 0);
    result = b++;

    printf("%d\n", b + c % a);
    printf("%d\n", c / b);
    printf("%d\n", d - c++);
    result = c--;

    printf("%d\n", a % 4 + b + d / b);
    printf("%d\n", d - a + c % 8);
    printf("%d\n", (b > c) - d);
    printf("%d\n", (b != 10) && (c >= d));
    printf("%d", a + b-- + d++);

    return 0;
}
