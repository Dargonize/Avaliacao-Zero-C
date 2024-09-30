#include <stdio.h>

int main() {
    int num, i;
    int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial nao existe para numeros negativos.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            fatorial *= i;
        }
        printf("Fatorial de %d = %d\n", num, fatorial);
    }

    return 0;
}