void printOddNumbers() {
int number;
scanf("%d", &number);
if (number != 0) {
if (number % 2 != 0) {
printf("%d ", number);
}
printOddNumbers(); // рекурсивный вызов функции
}
}

int main() {
printf("Введите последовательность целых чисел (введите 0 для завершения): ");
printOddNumbers();
return 0;
}