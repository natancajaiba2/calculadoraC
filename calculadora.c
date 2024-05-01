#include <stdio.h>
#include <stdlib.h>
void main(){

	int soma1;
	int soma2;
	int resultado1;
	int sub1;
	int sub2;
	int resultado2;
	int multi1;
	int multi2;
	int resultado3;
	int div1;
	int div2;
	int resultado4;



	printf("digite o primeiro numero da soma\n");
	scanf ("%d", &soma1);
	printf("digite o segundo numero da somna\n");
	scanf("%d", &soma2);
	resultado1 = soma1 + soma2;

	printf ("Resultado da soma é %d \n", resultado1);
	

	printf("digite o primeiro numero da subtração \n");
	scanf("%d", &sub1);
	printf("digite o segundo numero da subtração \n");
	scanf("%d", &sub2);
	resultado2 = sub1 - sub2;

	printf("o Resultado da subtração é %d \n", resultado2 );

	printf("digite o primeiro numero da multiplicação \n");
	scanf("%d", &multi1);
	printf("digite o segundo numero da multiplicalção \n");
	scanf("%d", &multi2);
	resultado3 = multi1 * multi2;

	printf("o resultado da multiplicação é %d \n", resultado3);

	printf("digite o primeiro numero da divisão \n");
	scanf("%d", &div1);
	printf("digite o segundo numero da divisão \n");
	scanf("%d", &div2 );
	resultado4 = div1 / div2;

	printf("o resultado da divisão é%d \n", resultado4 );


} 
