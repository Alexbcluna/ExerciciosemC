/*25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos 
valores é igual a média dos mesmos.*/
#include <locale.h>
int main()
{
	setlocale(0, "Portuguese");
	
int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, mg;

printf("Informe um numero inteiro: ");
scanf("%d", &v1);

printf("Informe um numero inteiro: ");
scanf("%d", &v2);

printf("Informe um numero inteiro: ");
scanf("%d", &v3);

printf("Informe um numero inteiro: ");
scanf("%d", &v4);

printf("Informe um numero inteiro: ");
scanf("%d", &v5);

printf("Informe um numero inteiro: ");
scanf("%d", &v6);

printf("Informe um numero inteiro: ");
scanf("%d", &v7);

printf("Informe um numero inteiro: ");
scanf("%d", &v8);

printf("Informe um numero inteiro: ");
scanf("%d", &v9);

printf("Informe apenas mais um numero inteiro: ");
scanf("%d", &v10);


mg=(v1+v2+v3+v4+v5+v6+v7+v8+v9+v10)/10;


if (v1==mg)
printf("\nO valor 1 é igual a média de todos os valores");
else if (v2==mg)
printf("\nO valor 2 é igual a média de todos os valores");
else if (v3==mg)
printf("\nO valor 3 é igual a média de todos os valores");
else if (v4==mg)
printf("\nO valor 4 é igual a média de todos os valores");
else if (v5==mg)
printf("\nO valor 5 é igual a média de todos os valores");
else if (v6==mg)
printf("\nO valor 6 é igual a média de todos os valores");
else if (v7==mg)
printf("\nO valor 7 é igual a média de todos os valores");
else if (v8==mg)
printf("\nO valor 8 é igual a média de todos os valores");
else if (v9==mg)
printf("\nO valor 9 é igual a média de todos os valores");
else if (v10==mg)
printf("\nO valor 10 é igual a média de todos os valores");
else 
printf("\nNenhum é igual a média dos valores");
}

