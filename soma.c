#include <stdio.h>

int main() {
    int numeros[5], soma = 0;

    printf("Digite 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Soma dos numeros: %d\n", soma);

    return 0;
}