#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    for (a = 2; a <= 100; a++) // 2부터 100까지 반복
    {
        for (b = 2; b < a; b++) // a의 약수를 찾기 위해 반복
        {
            if (a % b == 0) // 약수가 있으면 소수가 아님
                break;
        }

        if (a == b) // 약수가 없으면 소수
            printf("%d ", a);
    }

    return 0;
}
