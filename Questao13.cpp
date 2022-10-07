/*13) Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um. */
#include <stdio.h>

int main() {


    unsigned int n;

    printf("Informe um numero inteiro positivo: ");
    scanf("%u", &n);



    printf("A lista de numeros impares que são menores e/ou iguais a %d: ", n);
    for(int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
