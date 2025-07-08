#include <stdio.h>
#include <windows.h>
#define MOD 12345
#define MAX_N 10000

int main() {
    SetConsoleOutputCP(65001);
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int a[MAX_N + 1] = {0};
    int b[MAX_N + 1] = {0};
    int c[MAX_N + 1] = {0};

    a[1] = 1;
    b[1] = 1;
    c[1] = 0;

    for (int i = 2; i <= n; i++) {
        a[i] = (a[i-1] + b[i-1] + c[i-1]) % MOD;
        b[i] = a[i-1] % MOD;
        c[i] = b[i-1] % MOD;
    }

    int rez = (a[n] + b[n] + c[n]) % MOD;
    printf("Кількість шуканих послідовностей: %d\n", rez);

    return 0;
}
