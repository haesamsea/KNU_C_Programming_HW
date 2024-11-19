#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define PI 3.141592

typedef struct _point
{
    double x; // x 좌표
    double y; // y 좌표
} point;

typedef struct _circle
{
    point p;   // 원의 중심
    double r;  // 반지름
} circle;

int main(void)
{
    point* p = malloc(sizeof(point));
    circle* c = malloc(sizeof(circle));

    while (1)
    {
        printf("원의 중심 좌표(x, y), 반지름을 입력하시오: ");
        scanf("%lf %lf %lf", &(p->x), &(p->y), &(c->r));

        if (p->x < 0 || p->y < 0 || c->r < 0) // 음수 값 입력 방지
        {
            printf("error: 양수 값을 입력하세요.\n");
            continue;
        }
        break;
    }

    printf("원 중심 좌표: (%.2lf, %.2lf)\n", p->x, p->y);
    printf("원 반지름: %.2lf\n", c->r);
    printf("원 면적: %.2lf\n", PI * (c->r) * (c->r));

    free(p);
    free(c);

    return 0;
}
