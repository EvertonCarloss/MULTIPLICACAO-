#include <stdio.h>
#include <locale.h>

// MULTIPLICA��O.

void main () {

setlocale(LC_ALL,"Portuguese");

int n1, n2, multiplicacao;

printf("DIGITE O PRIMEIRO N�MERO: ");
scanf("%d",&n1);
printf("DIGITE O SEGUNDO N�MERO: ");
scanf("%d",&n2);

multiplicacao = n1 * n2;

printf("O RESULTADO DA MULTIPLICA��O ENTRE OS N�MEROS %d E %d � %d", n1,n2,multiplicacao);





}
