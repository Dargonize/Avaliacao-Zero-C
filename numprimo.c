#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool primo = true;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = false;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}