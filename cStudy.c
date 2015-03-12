#include <stdio.h>
#include <conio.h>

void soma(float n1, float n2);
void subtracao(float n1, float n2);
void multiplicacao(float n1, float n2);

int main(void) {
	
	float n1, n2, resultado;
	
	while(1) {
		
		printf("--- Calculadora ---");
		
		printf("\n\n(1) Soma");
		printf("\n(2) Subtracao");
		printf("\n(3) Multiplicao");
		printf("\n(4) Divisao");
		printf("\n(0) Sair");
		printf("\n\nSua opcao: ");
		int op; scanf("%d", &op);
		
		if(op == 0) {
			
			printf("\nPrograma encerrado.");
			exit(1);
		} else {
			
			printf("\n\nInforme um numero: ");
			scanf("%f", &n1);
			
			printf("Informe um segundo numero: ");
			scanf("%f", &n2);
			
			switch(op) {
				
				case 1: 
				    soma(n1, n2);
				    break;
				    
				case 2: 
				    subtracao(n1, n2);
				    break;
				    
				case 3:
				    multiplicacao(n1, n2);
					break;    
					
				default:
				    printf("\nOpcao invalida!");
					break;	
			}
		}
		
		getch();
		system("cls");
	}
	
	return 0;
}

void soma(float n1, float n2) { //Soma Function
	
	float soma = n1 + n2;
	printf("Resultado: %2.2f", soma);
}

void subtracao(float n1, float n2) { //Subtração Function
	
	float subtracao = n1 - n2;
	printf("Resultado: %2.2f", subtracao);
}

void multiplicacao(float n1, float n2) { //Multiplicacao Function
	
	float multiplicacao = n1 * n2;
	printf("Resultado: %2.2f", multiplicacao);
}
