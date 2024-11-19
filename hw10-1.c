#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c);
int min(int a, int b, int c);
int middle(int a, int b, int c);

int main(void) 
{
    int a, b, c;

    while (1) 
    {
        printf("정수 3개를 입력하시오: ");
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
        {
            printf("\n프로그램을 종료합니다.\n");
            break;
        }

        printf("최댓값: %d ", max(a, b, c));
        printf("중간값: %d ", middle(a, b, c));
        printf("최솟값: %d ", min(a, b, c));
        printf("\n\n");
    }

    return 0;
}

int max(int a, int b, int c) 
{
    int maxNum = a;
    if (maxNum < b) maxNum = b;
    if (maxNum < c) maxNum = c;
    return maxNum;
}

int min(int a, int b, int c) 
{
    int minNum = a;
    if (minNum > b) minNum = b;
    if (minNum > c) minNum = c;
    return minNum;
}

int middle(int a, int b, int c) 
{
    int maxNum = max(a, b, c);
    int minNum = min(a, b, c);
    return a + b + c - maxNum - minNum;
}
