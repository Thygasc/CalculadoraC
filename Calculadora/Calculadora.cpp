// Calculadora.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

float utilizacaocase(float a, float b, char opr) {  //criar uma classe para fazer com case
	float resultado = 0;
	switch (opr){
		case '*':
			resultado = a * b;
			break;
		
		case '+':
			resultado = a + b;
			break;
		case '-':
			resultado = a - b;
			break;
		case '/':
			resultado = a / b;
			break;

	}
	return resultado;
}

float utilizacaoif(float a, float b, char opr) {
	float resultado = 0;

	if (opr=='*'){
		resultado = a * b;
	}
	else 
		if (opr == '+') {
			resultado = a + b;
		}
		else
			if (opr == '-') {
				resultado = a - b;
			}
			else {
				resultado = a / b;
			}

	return resultado;

	}
		

bool verificadoropr(char opr) {
	
	if ((opr != '*') && (opr != '/') && (opr != '+') && (opr != '-')) {
		return (true);
	}	
	else {
		return false;
	}

}




int main()
{
	float valor1 = 0, valor2 = 0, resultadocase = 0, resultadoif = 0;
	int verificador = 0;										//Declaração das variaveis
	char operador;
	do
	{
		printf("\nDigite o operador desejado \n+ Para soma \n- Para subtracao \n* Para multiplicacao \n/ Para divisao");
		scanf_s("%c", &operador);
		do{
			printf("\nDigite o operador desejado \n+ Para soma \n- Para subtracao \n* Para multiplicacao \n/ Para divisao");
			scanf_s("%c", &operador);
		} while (verificadoropr(operador == true)); //Verificador da variavel operador
			

		printf("\n Digite o primeiro valor: ");
		scanf_s("%f", &valor1);
		printf("\n Digite o segundo valor: ");
		scanf_s("%f", &valor2);

		resultadocase = utilizacaocase(valor1, valor2, operador); //Chamando as funcões
		resultadoif = utilizacaoif(valor1, valor2, operador);

		printf("\nO resultado de %0.2f %c %0.2f e igual a: ",valor1,operador,valor2);
		printf("\nResultado da funcao case: %0.2f \nResultado da funcao if: %0.2f", resultadocase, resultadoif);

		printf("\nDeseja continuar com outro calculo?\n1 - Para sim \n0  - Para nao");
		scanf_s("%i", &verificador);
	} while (verificador == 1);
}
