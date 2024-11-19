#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    };

    struct movie
    {
        char name[50];       // 영화 제목 (크기 증가)
        char cap[20];        // 감독 (크기 증가)
        int number;          // 관객 수
        struct date onmovie; // 개봉일
    };

    // 영화 데이터 초기화
    struct movie f1 = {"명량", "김한민", 17613000, {2014, 7, 30}};
    struct movie f2 = {"극한직업", "이병헌", 16264000, {2019, 1, 23}};
    struct movie f3 = {"신과 함께-죄와 벌", "김용화", 14410000, {2017, 12, 20}};
    struct movie f4 = {"국제시장", "윤제균", 14257000, {2014, 12, 17}};
    struct movie f5 = {"어벤저스-엔드게임", "안소니 루소", 13934000, {2019, 4, 24}};

    printf(" 제목                      감독              관객수     개봉일\n");
    printf("==================================================================\n");

    printf("[%25s] %15s %10d %4d/%02d/%02d\n", f1.name, f1.cap, f1.number, f1.onmovie.year, f1.onmovie.month, f1.onmovie.day);
    printf("[%25s] %15s %10d %4d/%02d/%02d\n", f2.name, f2.cap, f2.number, f2.onmovie.year, f2.onmovie.month, f2.onmovie.day);
    printf("[%25s] %15s %10d %4d/%02d/%02d\n", f3.name, f3.cap, f3.number, f3.onmovie.year, f3.onmovie.month, f3.onmovie.day);
    printf("[%25s] %15s %10d %4d/%02d/%02d\n", f4.name, f4.cap, f4.number, f4.onmovie.year, f4.onmovie.month, f4.onmovie.day);
    printf("[%25s] %15s %10d %4d/%02d/%02d\n", f5.name, f5.cap, f5.number, f5.onmovie.year, f5.onmovie.month, f5.onmovie.day);

    return 0;
}
