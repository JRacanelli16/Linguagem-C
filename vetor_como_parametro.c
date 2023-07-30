//exemplo de funçao usando vetor como parametro
#include <stdio.h>
void carregavetor (float vet[], int tam);
int main (void){
	int pos;
	float vetnotas[10];
	carregavetor (vetnotas, 10);
	for (pos=0;pos < 10;pos++){
		printf ("Nota %d = %5.2f \n", pos+1, vetnotas[pos]);
		
	}
	return 0;
}
void carregavetor (float vet[], int tam ){
	int pos;
	for (pos=0; pos < tam; pos ++){
		printf (" Digite a %d Nota", pos+1);
		scanf ("%f", & vet[pos]);
	}
}
