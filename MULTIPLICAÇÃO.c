#include <stdio.h>
#include <locale.h>

// MULTIPLICAÇÃO.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, n2, multiplicacao;

printf("DIGITE O PRIMEIRO NÚMERO: ");
scanf("%d",&n1);
printf("DIGITE O SEGUNDO NÚMERO: ");
scanf("%d",&n2);

multiplicacao = n1 * n2;

printf("O RESULTADO DA MULTIPLICAÇÃO ENTRE OS NÚMEROS %d E %d É %d", n1,n2,multiplicacao);





}
