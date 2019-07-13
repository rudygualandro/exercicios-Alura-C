#include <stdio.h>
#include <stdlib.h>


int main() {
	
	printf("****************\n");
	printf("*Bem vindo Rudy*\n");
	printf("****************\n");

	int numeroSecreto = 42;
	int chute;
	int ganhou = 0;
	int tentativas = 1;
	double pontos = 1000;

	while (ganhou == 0) {

		printf("Tentativa %d\n", tentativas);
		printf("Qual é seu chute? ");
		scanf("%d", &chute);

		printf("Seu chute foi %d\n", chute);

		if (chute < 0) {
			printf("Você não pode chutar números negativos\n");
			continue;
		}

		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;

		if (acertou){
			printf("Chute certo!\n");
			ganhou = 1;
		
		} else if (maior) {

				printf("O número secreto é menor que seu chute\n");

			} else {

				printf("O número secreto é maior que seu chute\n");

			}
		tentativas = tentativas + 1;
		double pontosperdidos = abs(chute - numeroSecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}
	printf("Fim de Jogo!\n");
	printf("Total de pontos: %.1f\n", pontos);

}