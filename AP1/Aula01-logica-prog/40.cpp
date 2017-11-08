#include <conio.h>
#include <stdio.h>

main(){
	
int num1,num2,num3;

printf("digite o primeiro numero");
scanf("%i", &num1);
printf("digite o segundo numero");
scanf("%i", &num2);
printf("digite o terceiro numero");
scanf("%i", &num3);

if(num1<num2 && num1<num3){
	 if(num1<num3)
	 	printf("A ordem crescente e %i%i%i\n",num1,num2,num3);
	 else
	 	printf("A ordem crescente e %i%i%i\n", num1,"-",num3,"-",num2);
	 }

if(num2<num1 && num2<num3){
	if(num1<num3)
		printf("A ordem crescente e%i%i%i\n ", num2, num1,num3);
	else
		printf("A ordem crescente e %i%i%i\n", num2,num3, num1);
	
	}

if(num3<num1 && num3<num2){
	if(num1<num2)
		printf("a ordem crescente e %i%i%i\n", num3, num1, num2);
		else
			printf("a ordem crescente e %i%i%i\n", num3,num2,num1);
		
	}

getche();
}
