#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int numero, frente, atras, caixa;
	scanf("%d", &numero);
	caixa = numero;
	numero /= 10;
	caixa = caixa % 10;
	frente = caixa;
	atras = numero;
	if(frente == 0){printf("%d", atras);
	}
	else printf("%d%d", frente, atras);

	return 0;
}
