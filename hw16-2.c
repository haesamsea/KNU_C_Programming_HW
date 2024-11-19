#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum num { ace = 1, jack = 11, queen = 12, king = 13 };

struct Card
{
    int number; // 카드 숫자
    int shape;  // 카드 무늬
};

struct Card cardall[52];

struct Player
{
    struct Card cardplayer[7]; // 플레이어가 가진 카드
};

void shuffle()
{
    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        int index = rand() % 52;
        struct Card temp = cardall[index];
        cardall[index] = cardall[i];
        cardall[i] = temp;
    }
}

void filldeck()
{
    int i = 0;
    for (int j = 0; j < 4; j++) // 4개의 무늬
    {
        for (int k = 1; k <= 13; k++) // 1~13 카드
        {
            cardall[i].number = k;
            cardall[i].shape = j;
            i++;
        }
    }
}

void deal(struct Player player[], int people)
{
    for (int i = 0; i < people; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            player[i].cardplayer[j] = cardall[i * 7 + j];
        }
    }
}

int main(void)
{
    struct Player player[7];
    filldeck();
    shuffle();

    int people = 0;
    printf("카드 게임에 몇 명이 참가합니까? (1~7명): ");
    scanf("%d", &people);

    if (people >= 1 && people <= 7)
    {
        printf("\n플레이어:\n");
        for (int i = 1; i <= people; i++)
        {
            printf("플레이어%d ", i);
        }
        printf("\n\n");

        deal(player, people);

        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < people; j++)
            {
                switch (player[j].cardplayer[i].number)
                {
                case ace:
                    printf(" A");
                    break;
                case jack:
                    printf(" J");
                    break;
                case queen:
                    printf(" Q");
                    break;
                case king:
                    printf(" K");
                    break;
                default:
                    printf("%2d", player[j].cardplayer[i].number);
                    break;
                }

                printf(" of ");
                switch (player[j].cardplayer[i].shape)
                {
                case 0:
                    printf("♥ ");
                    break;
                case 1:
                    printf("◆ ");
                    break;
                case 2:
                    printf("♣ ");
                    break;
                case 3:
                    printf("♠ ");
                    break;
                }
                printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("잘못된 입력입니다.\n");
    }

    return 0;
}
