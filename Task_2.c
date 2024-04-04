#include <stdio.h>

void printNumbers(int a, int b) {
    if (a == b) {
        printf("%d ", a);
    } else {
        if (a < b) {
            printf("%d ", a);
            printNumbers(a + 1, b);
        } else {
            printf("%d ", a);
            printNumbers(a - 1, b);
        }
    }
}

int main() {
    int A, B;
    
    printf("Введите два целых числа через пробел: ");
    scanf("%d %d", &A, &B);
    
    printf("Последовательность чисел: ");
    printNumbers(A, B);
    
    return 0;
}