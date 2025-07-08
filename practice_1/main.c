#include <stdio.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    int t1, t2, t3;
    double r, t;

    printf("Введіть три значення (час потрібний на поїдання пирогу кожним з 3 учасників): ");
    scanf("%d %d %d", &t1, &t2, &t3);

    r = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    t = 1.0 / r;

    printf("пиріг з'їдять через %.2lf годин\n", t);

    return 0;
}
