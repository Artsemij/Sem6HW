#include <stdio.h>

int countOnesInBinary(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 2) + countOnesInBinary(n / 2);
    }
}

int main() {
    int number;
    printf("Введите натуральное число: ");
    scanf("%d", &number);
    printf("Количество единиц в двоичной записи числа: %d\n", countOnesInBinary(number));
    return 0;
}