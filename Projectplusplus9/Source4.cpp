#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void texto() {

	printf("\t\t\t*****************\n");
	printf("\t\t\t***Calculadora***\n");
	printf("\t\t\t*****************\n\n\n");

}


int main() {

	setlocale(LC_ALL, "Portuguese");
	float numero1,numero2,resultado;
	int menu;
	texto();
	printf("\n\n\n\t\t\tO que deseja fazer?\n\n");
	printf("\t\t\t*******************\n");
	printf("\t\t\t1 - Somar\n");
	printf("\t\t\t2 - Subtrair\n");
	printf("\t\t\t3 - Multiplicar\n");
	printf("\t\t\t4 - Dividir\n");
	printf("\t\t\t5 - Sair\n");
	scanf_s("%i", &menu);


	switch (menu)
	{
	case 1:
		system("cls");
		texto();
		printf("Primeiro n�mero: ");
		scanf_s("%f", &numero1);
		system("cls");
		texto();
		printf("Segundo numero: ");
		scanf_s("%f", &numero2);
		system("cls");
		resultado = numero1 + numero2;
		texto();
		printf("\n\n\nO resultado da soma � %.0f\n\n\n", resultado);


		break;

	case 2:
		system("cls");
		texto();
		printf("Primeiro n�mero: ");
		scanf_s("%f", &numero1);
		system("cls");
		texto();
		printf("Segundo numero: ");
		scanf_s("%f", &numero2);
		system("cls");
		resultado = numero1 - numero2;
		texto();
		printf("\n\n\nO resultado da subtra��o � %.0f\n\n\n", resultado);

		break;
	
	case 3:

		system("cls");
		texto();
		printf("Primeiro n�mero: ");
		scanf_s("%f", &numero1);
		system("cls");
		texto();
		printf("Segundo numero: ");
		scanf_s("%f", &numero2);
		system("cls");
		resultado = numero1 * numero2;
		texto();
		printf("\n\n\nO resultado da multiplica��o � %.0f\n\n\n", resultado);

		break;
	case 4:

		system("cls");
		texto();
		printf("Primeiro n�mero: ");
		scanf_s("%f", &numero1);
		system("cls");
		texto();
		printf("Segundo numero: ");
		scanf_s("%f", &numero2);
		system("cls");
		resultado = numero1 / numero2;
		texto();
		printf("O resultado da divis�o � %.1f\n\n\n", resultado);

		break;

	case 5:

		printf("\n\n\n\t\t\tSaindo...\n\n\n");
		break;

	default:

		printf("\n\n\n\t\t\tOp��o incorreta!!!\n\n\n");
		break;
	}

	system("PAUSE");
	return 0;

	

}

