#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

char tabuleiro[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void teste() {
	printf("%c %c %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
	printf("%c %c %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
	printf("%c %c %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}

void substituirX(int a) {
	switch (a) {
	case 1:
		if (tabuleiro[0][0] == '1') {
			tabuleiro[0][0] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 2:
		if (tabuleiro[0][1] == '2') {
			tabuleiro[0][1] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 3:
		if (tabuleiro[0][2] == '3') {
			tabuleiro[0][2] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 4:
		if (tabuleiro[1][0] == '4') {
			tabuleiro[1][0] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 5:
		if (tabuleiro[1][1] == '5') {
			tabuleiro[1][1] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 6:
		if (tabuleiro[1][2] == '6') {
			tabuleiro[1][2] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 7:
		if (tabuleiro[2][0] == '7') {
			tabuleiro[2][0] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 8:
		if (tabuleiro[2][1] == '8') {
			tabuleiro[2][1] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 9:
		if (tabuleiro[2][2] == '9') {
			tabuleiro[2][2] = 'X';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}

	default:
		break;
	}
}

void substituirO(int a) {
	switch (a) {
	case 1:
		if (tabuleiro[0][0] == '1') {
			tabuleiro[0][0] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 2:
		if (tabuleiro[0][1] == '2') {
			tabuleiro[0][1] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 3:
		if (tabuleiro[0][2] == '3') {
			tabuleiro[0][2] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 4:
		if (tabuleiro[1][0] == '4') {
			tabuleiro[1][0] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 5:
		if (tabuleiro[1][1] == '5') {
			tabuleiro[1][1] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 6:
		if (tabuleiro[1][2] == '6') {
			tabuleiro[1][2] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 7:
		if (tabuleiro[2][0] == '7') {
			tabuleiro[2][0] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 8:
		if (tabuleiro[2][1] == '8') {
			tabuleiro[2][1] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}
	case 9:
		if (tabuleiro[2][2] == '9') {
			tabuleiro[2][2] = 'O';
			break;
		}
		else {
			printf("Escolha um lugar diferente!\n\n");
			break;
		}

	default:
		break;
	}
}

bool verificar() {
	if (tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][0] == tabuleiro[0][2]) {
		printf("\n\nO ganhador é: %c", tabuleiro[0][0]);
		return true;

	}else if (tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][0] == tabuleiro[1][2]) {
		printf("\n\nO ganhador é: %c", tabuleiro[1][0]);
		return true;

	}else if (tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][0] == tabuleiro[2][2]) {
		printf("\n\nO ganhador é: %c", tabuleiro[2][0]);
		return true;

	}else if (tabuleiro[0][0] == tabuleiro[1][0] && tabuleiro[0][0] == tabuleiro[2][0]) {
		printf("\n\nO ganhador é: %c", tabuleiro[0][0]);
		return true;

	}else if (tabuleiro[0][1] == tabuleiro[1][1] && tabuleiro[0][1] == tabuleiro[2][1]) {
		printf("\n\nO ganhador é: %c", tabuleiro[0][1]);
		return true;

	}else if (tabuleiro[0][2] == tabuleiro[1][2] && tabuleiro[0][2] == tabuleiro[2][2]) {
		printf("\n\nO ganhador é: %c", tabuleiro[0][2]);
		return true;

	}else if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2]) {
		printf("\n\nO ganhador é: %c", tabuleiro[0][0]);
		return true;

	}else if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0]) {
		printf("\n\nO ganhador é: %c", tabuleiro[0][2]);
		return true;

	}

	return false;
}

int main() {
	printf("Jogo da velha do Victor Flavio 1.0\n");
	printf("Escolha uma posição: \n\n");
	teste();

	int cont = -1;
	bool very = false;

	while (cont != 0 or very != true) {
		printf("\ndigite o número: ");
		scanf_s("%d", &cont);

		if (cont >= 1 && cont <= 9) {
			substituirX(cont);
			teste();

			//
			very = verificar();
			if (very == true) {
				break;
			}

			printf("\ndigite o número: ");
			scanf_s("%d", &cont);

			if (cont >= 1 && cont <= 9) {
				substituirO(cont);
				teste();

				//
				very = verificar();
				if (very == true) {
					break;
				}
			}
			else {
				printf("Escolha um número entre 1 e 9!\n\n");
			}
		}
		else {
			printf("Escolha um número entre 1 e 9!\n\n");
			scanf_s("%d", &cont);
		}

	}

	return 0;
}