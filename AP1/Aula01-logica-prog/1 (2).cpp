#include <conio.h>
#include <stdio.h>


main(){
	int num1, num2;
	
	printf("digite o primeiro numero");
	scanf("%i", &num1);
	printf("digite o segundo numero");
	scanf("%i", &num2);
	if(num1>num2){
		printf("o numero 1 e maior que o numero 2");
	}
	if(num2>num1){
		printf("o numero 2 e maior que o numero 1");
	}
	if(num1==num2){
		printf("os numeros sao iguais");
	}
	getche();
}
