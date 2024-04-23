#include <stdio.h>

//função busca binária
int binaria(int* itens, int tam, int chave)
{
	int inicio, fim, meio;

	inicio = 0;
	fim = tam - 1;
	while (inicio <= fim) {
		meio = (inicio + fim) / 2;
		if (chave < itens[meio]) {
			fim = meio - 1;
		}
		else {
			if (chave > itens[meio]) {
				inicio = meio + 1;
			}
			else {
				return meio; // encontrado
			}
		}
	}
	return -1;
}

int main() {
	int numUser = 0;
	int vet[100] = { 0 };
	int teste = 0;
	int cont;
	int numBusca;
	
	int indice;
	int tamanho;
	int chave;

	printf("Insira um nuumero: ");
	scanf_s("%d",&numUser);

	if (numUser < 3 or numUser > 100) {
		while (teste == 0) {
			printf("Insira um nuumero: ");
			scanf_s("%d", &numUser);

			if (numUser >= 3 or numUser <= 100) {
				teste = 1;
			}
		}
	}

	for (cont = 0; cont < numUser; cont++) {
		
		if (cont == 0) {
			vet[0] = 1;
		} 
		
		if (cont == 1) {
			vet[1] = 1;
		}
		
		if (cont > 1) {
			vet[cont] = vet[cont - 1] + vet[cont - 2];
		}

	}

	for (cont = 0; cont < numUser; cont++) {
		printf("%d - ", vet[cont]);
	}

	printf("\nEscolha um número da sequência \n");
	scanf_s("%d", &numBusca);

	// realiza busca bin ria
	indice = binaria(&vet[0], numUser, numBusca);

	if (indice >= 0){
		printf("\nO numero esta na posicao %d do vetor", indice + 1);
	}else{
		printf("\nO numero nao foi encontrado.");
	}

	return 0;
}
