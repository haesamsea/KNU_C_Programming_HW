#include<stdio.h>
#include<string.h>



int mystrlen(const char * p)
{

    int cnt = 0;
    for (int i = 0;*(p + i); i++) {
        cnt++;
    }
    return cnt;
}

int main()
{
    int spell[81] = {
        NULL
    };

    char * string = spell;
    gets(string);
    printf("%d", strlen(string));
    printf(" %d\n", mystrlen(string));

    int spell2[81] = {
        NULL
    };

    char * string2 = spell2;

    gets(string2);
    printf("%d", strlen(string2));
    printf(" %d\n", mystrlen(string2));

    int spell3[81] = {
        NULL
    };

    char * string3 = spell3;
    gets(string3);
    printf("%d", strlen(string3));
    printf(" %d\n", mystrlen(string3));

    int spell4[81] = {
        NULL
    };

    char * string4 = spell4;

    gets(string4);
    printf("%d", strlen(string4));
    printf(" %d\n", mystrlen(string4));

    return 0;
}