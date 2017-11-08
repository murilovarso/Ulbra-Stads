#include <stdio.h>
#include <conio.h>

main(){
	int a,b,c,i;
	
	printf("digite os valores A,B,C");
	scanf("%i%i%i", &a,&b,&c);
	printf("digite um valor para I (1,2 ou 3)");
	scanf("%i", &i);
	
	if(i==1){
		if(a<b && a<c){
			if(b<c){
				printf("a ordem crescente é %i%i%i",a,b,c);
			}
			else
				printf("a ordem crescente é  %i%i%i ", a,c,b);
			
			}
			
		}
		if(b<a && b<c){
			if(a<c){
				printf("a ordem crescente é  %i%i%i",b,a,c);
			}
			else{
				printf("a ordem crescente é  %i%i%i", b,c,a);
			}
		}
	if(c<a && c<b){
		if(a<b){
			printf("a ordem crescente é  %i%i%i",c,a,b);
		}
		else{
			printf("a ordem crescente é  %i%i%i",c,b,a );
		}
	}
	
	if(i==2){
		if(a>b && a>c){
			if(b>c){
				printf("a ordem decrescente é  %i%i%i",a,b,c);
			}
			else{
				printf("a ordem decrescente é  %i%i%i", a,c,b);
			}
		}
		if(b>a && b>c){
			if(a>c){
				printf("a ordem decrescente é  %i%i%i", b,a,c);
			}
			else{
				printf("a ordem decrescente é  %i%i%i",b,c,a);
			}
		}
		if(c>a && c>b){
			if(a>b){
				printf("a ordem decrescente é  %i%i%i",c,a,b);
			}
			else{
				printf("a ordem decrescente é  %i%i%i",c,b,a);
			}
		}
	}
	if(i==3){
		if(a>b && a>c){
			printf("a ordem desejada é  %i%i%i",b,a,c);
		}
		if(b>a && b>c){
			printf("a ordem desejada é  %i%i%i",a,b,c);
		}
		if(c>a && c>b){
			printf("a ordem desejada é  %i%i%i",a,c,b);
		}
	}
	getche();
}
