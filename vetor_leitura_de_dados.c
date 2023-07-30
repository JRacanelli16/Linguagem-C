// Elabore um programa que carregue um vetor de 5 posiçoes com valores
//digitados pelo usuario e depois msotre estes valores com um apontador

#include <stdio.h>
int main (void){
	int vet [5], pos, *apontador;
	for (pos=0;pos <5;pos++){
		printf ("Digite O %d valor : \n", pos+1);
		scanf ("%d", &vet[pos]);
	}
	for (pos =0; pos <5; pos++){
		printf ("Valor = %d = %d \n", pos, *apontador);
	}
	return 0;
}
	




