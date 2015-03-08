#include <stdio.h>
#include <conio.h>

int soma(int n1, int n2);

int main(void) {
	
	printf("Hello World!\n\n");
	
	int n1, n2;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	
	printf("Informe um segundo numero: ");
	scanf("%d", &n2);
	
	int resultado = soma(n1, n2);
	
	printf("\nSoma dos numeros: %d", resultado);
	
	return 0;
}

int soma(int n1, int n2) {
	
	int soma = n1 + n2;
	
	return soma;
}
