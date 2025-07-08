#include <stdio.h>
#include <math.h>
#include <windows.h>
int MinSt(int x, int y) {
    int d = y - x;

    if (d == 0) {
        return 0;
    }

    int k = (int)sqrt((double)d);

    if (k * k == d) {
        return 2 * k - 1;
    } else {
        if (d <= k * k + k) {
            return 2 * k;
        } else {
            return 2 * k + 1;
        }
    }
}

int main() {
    SetConsoleOutputCP(65001);
    int x, y;

    printf("Введіть x і y: ");
    scanf("%d %d", &x, &y);

    if (x > y || x < 0 || y >= 2147483647) {
        printf("Некоректні вхідні дані!\n");
        return 1;
    }

    int result = MinSt(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}