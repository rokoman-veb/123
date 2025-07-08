#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

long long fac(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main() {
    SetConsoleOutputCP(65001);
    char word[15];
    int fr[256] = {0};
    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        word[i] = toupper(word[i]);
        fr[(unsigned char)word[i]]++;
    }

    long long total = fac(length);
    for (int i = 0; i < 256; i++) {
        if (fr[i] > 1)
            total /= fac(fr[i]);
    }

    printf("Кількість анаграм: %lld\n", total);
    return 0;
}