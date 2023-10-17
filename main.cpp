#include <stdio.h>

int Normal(int Money, int hour) {

    if (hour <= 1) {
        return Money;
    }

    return Money + Normal(1072, hour - 1);
}

int Recursive(int Money, int hour) {

    if (hour <= 1) {
        return Money;
    }

    return Money + Recursive(Money * 2 - 50, hour - 1);
}


int main() {
    int R = Recursive(100, 8);
    int N = Normal(1072, 8);

    printf("�ċA�I�Ȓ��� = %d\n", R);
    printf("��ʓI�Ȓ��� = %d\n", N);
    return(0);

}




