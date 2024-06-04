#include <stdio.h>
#include <stdlib.h>

void soma(float valor1, float valor2){
	float resul;
	resul = valor1 + valor2;
	printf("o resultado da soma é:%.2f\n",resul);


}

void sub (float valor1, float valor2){
	float resul;
	resul = valor1 - valor2;
	printf("o resultado da subtração é:%.2f\n", resul);
}
void multi (float valor1, float valor2){
	float resul;
	resul = valor1 * valor2;
	printf ("o resultado da multiplicação é: %.2f\n", resul);

}
void divisao (float valor1, float valor2){
	float resul;
	resul = valor1 / valor2;
	printf("o resultado da divisão é: %.2f\n", resul);

}
void main(){
	char operacao;
	float num1;
	float num2;
	float resultado;

	printf("escolha a operação(+,-,*,/)");
	scanf ("%c", &operacao);
	
	printf("digite o primeiro numero");
	scanf ("%f", &num1);
        printf("digie o segundo numero");
	scanf("%f", &num2);

switch(operacao){
	case '+':
		soma(num1,num2);
		break;
	case '-':
		sub(num1,num2);
		break;
	case '*':
		multi(num1,num2);
		break;
	case '/':
		divisao(num1,num2);
		break;

			


}	




}
