#include <stdio.h>

void print_num(int num) {

    if (num < 10) {

        printf("%d ", num);

    } else {

        print_num(num / 10); // вызываем функцию для числа без последней цифры

        printf("%d ", num % 10); // выводим последнюю цифру 

    }

}

int main() {

    int n;

    printf("Input not-negative integer number: ");

    scanf("%d", &n);

    printf("Number's digits in literal order: ");

    print_num(n);

    return 0;

}