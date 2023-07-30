#include <stdio.h>
void carregavetor();
float calculamedia();
void mostraAcima();
int vet [10];
float media;

int main (void){
	carregavetor();
	media = calculamedia();
	mostraAcima ();
	return 0;
}
void carregavetor(){
	int pos;
	for (pos=0; pos<10 ;pos++){
		printf ("Digite o %d valor \n", pos+1);
		scanf ("%d", & vet [pos]);
	}
	
	
}

float calculamedia(){
	int pos,soma=0;
	for (pos=0;pos<10;pos++){
		soma = soma+vet [pos];
	}
	return soma/10.0;
	
}

void mostraAcima(){
	int pos; 
	for (pos=0;pos<10;pos++){
	if (vet[pos]>media){
		printf ("Valor = %d\n", vet[pos]);
	}
	}
}

