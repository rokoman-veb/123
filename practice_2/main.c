#include <stdio.h>

int Numb1(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int Numb2(int a, int b) {
    return a * b / Numb1(a, b);
}

int main() {
    int p, i;
    int N[20];

    scanf("%d", &p);

    for (i = 0; i < p; i++) {
        scanf("%d", &N[i]);
    }

    int result = N[0];
    for (i = 1; i < p; i++) {
        result = Numb2(result, N[i]);
    }

    printf("%d\n", result);

    return 0;
}