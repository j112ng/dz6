#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "RUS");

    int n;
    int sum1 = 0;
    int sum2 = 0;
    int temp;

    printf("Введите шестизначное число: ");
    scanf("%d", &n);

    if (n < 100000 || n > 999999) {
        printf("Ошибка: число должно быть шестизначным!\n");
    }
    else {
        temp = n;

        sum2 += temp % 10;
        temp /= 10;
        sum2 += temp % 10;
        temp /= 10;
        sum2 += temp % 10;
        temp /= 10;

        sum1 += temp % 10;
        temp /= 10;
        sum1 += temp % 10;
        temp /= 10;
        sum1 += temp % 10;

        if (sum1 == sum2) {
            printf("Число %d является счастливым!\n", n);
        }
        else {
            printf("Число %d не является счастливым.\n", n);
        }
    }

    return 0;
}