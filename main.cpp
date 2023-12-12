#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void (pFunc)(int a);

void DispResult(int answer) {
    int result = rand() % 6 + 1;
    if (result % 2 == 0) {
        if (answer == 1) {
            printf("サイコロの目:%d : 不正解\n", result);
        }
        else if (answer == 2) {
            printf("サイコロの目:%d : 正解\n", result);
        }
    }
    else if (result % 2 == 1) {
        if (answer == 1) {
            printf("サイコロの目:%d : 正解\n", result);
        }
        else if (answer == 2) {
            printf("サイコロの目:%d : 不正解\n", result);
        }
    }
}

void SetTimeout(pFunc p, int answer) {
    Sleep(3 * 1000);
    p(answer);
}

void Game(pFunc p, int second) {
    printf("奇数か偶数を選んでください(1:奇数, 2:偶数)\n");
    int answer;
    scanf_s("%d", &answer);
    SetTimeout(p, answer);
}

int main() {

    srand(unsigned int(time(nullptr)));

    void (*pFunc)(int a) = &DispResult;

    Game(pFunc, 3);

    return 0;
}