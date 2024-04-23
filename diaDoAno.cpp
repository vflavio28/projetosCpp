#include <stdio.h>

bool bissexto(int ano) {
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int dia;
	int mes;
	int ano;

	int teste = 0;

	while (teste != 3) {
		//int teste = 0;

		int jan = 31;
		int fev = 28;
		int mar = 31;
		int abr = 30;
		int mai = 31;
		int jun = 30;
		int jul = 31;
		int ago = 31;
		int set = 30;
		int out = 31;
		int nov = 30;
		int dez = 31;

		int diaMes = 0;

		printf("\nInsira um dia: ");
		scanf_s("%d", &dia);

		printf("\nInsira um mes: ");
		scanf_s("%d", &mes);

		printf("\nInsira um ano: ");
		scanf_s("%d", &ano);

		if (ano >= 1900 && ano <= 2100) {
			if (bissexto(ano) == true) {
				fev = 29;
				teste = teste + 1;
			}else {
				teste = teste + 1;
			}}else {
				printf("\nInsira um ano entre 1900 e 2100!\n");
			}

		if (mes >= 1 && mes <= 12) {
			teste = teste + 1;
		}else {
			printf("\nInsira um mes entre 1 e 12!\n");
		}

		int diaMax = 0;
		switch (mes) {
			case 1:
				diaMax = jan;
				break;
			case 2:
				diaMax = fev;
				diaMes = jan;
				break;
			case 3:
				diaMax = mar;
				diaMes = jan + fev;
				break;
			case 4:
				diaMax = abr;
				diaMes = jan + fev + mar;
				break;
			case 5:
				diaMax = mai;
				diaMes = jan + fev + mar + abr;
				break;
			case 6:
				diaMax = jun;
				diaMes = jan + fev + mar + abr + mai;
				break;
			case 7:
				diaMax = jul;
				diaMes = jan + fev + mar + abr + mai + jun;
				break;
			case 8:
				diaMax = ago;
				diaMes = jan + fev + mar + abr + mai + jun + jul;
				break;
			case 9:
				diaMax = set;
				diaMes = jan + fev + mar + abr + mai + jun + jul + ago;
				break;
			case 10:
				diaMax = out;
				diaMes = jan + fev + mar + abr + mai + jun + jul + ago + set;
				break;
			case 11:
				diaMax = nov;
				diaMes = jan + fev + mar + abr + mai + jun + jul + ago + set + out;
				break;
			case 12:
				diaMax = dez;
				diaMes = jan + fev + mar + abr + mai + jun + jul + ago + set + out + nov;
				break;
			default:
				break;
		}

		if (dia >= 1 && dia <= 31) {
			if (dia <= diaMax) {
				teste = teste + 1;
			}else {
				printf("\nO dia não cabe no mes indicado!, ele deve ser menor que %d\n", diaMax);
			}
		}else {
			printf("\nInsira um dia válido!\n");
		}

		if (teste == 3) {
			
			int resultado = dia + diaMes;

			printf("\nO resultado é: dia %d do ano. \n", resultado);
		}
	}

	return 0;
}