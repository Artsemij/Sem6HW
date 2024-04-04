#include <stdio.h>

int recurs_power(int n, int p) {
    if (p == 0) { // Базовый случай: любое число в степени 0 равно 1
        return 1;
    } else {
        return n * recurs_power(n, p - 1); // Рекурсивно умножаем число n на себя p раз
    }
}

int main() {
    int n, p;
    
    printf("Введите число n (-100 <= n <= 100): ");
    scanf("%d", &n);
    
    printf("Введите степень p (0 <= p <= 100): ");
    scanf("%d", &p);
    
    if (n < -100 || n > 100 || p < 0 || p > 100) {
        printf("Введены некорректные данные.\n");
    } else {
        int result = recurs_power(n, p); // Вызываем функцию для возведения числа n в степень p
        printf("%d в степени %d = %d\n", n, p, result); // Выводим результат
    }
    
    return 0;
}