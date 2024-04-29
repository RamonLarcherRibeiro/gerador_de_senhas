#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_MAXIMO 12

int main() {
    char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int tamanho = sizeof(caracteres) - 1;

    srand(time(NULL));

    printf("Gerando senha aleatória:\n");

    for (int i = 0; i < TAMANHO_MAXIMO; i++) {
        printf("%c", caracteres[rand() % tamanho]);
    }

    printf("\n");

    return 0;
}
