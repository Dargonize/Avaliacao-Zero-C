#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("A string contem %lu caracteres.\n", strlen(string) - 1);

    return 0;
}
