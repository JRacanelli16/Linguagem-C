//Alocação Dinamica de Memoria
//sizeof (): devolve o tamanho de uma estrutura malloc (sizeof ()): tenta alocar
//memoria solicitada.
//free (apontador) : libera a area alocadada 

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int *pnum;
	if (!(pnum = malloc(sizeof(int)))){
		printf ("Faltou Memoria!\n");
		exit (1);                            //qualquer numero diferente de 0 
	}
	printf ("Digite um valor: " );
	scanf ("%d", pnum);
	printf ("Voce digitou %d \t", *pnum);
	free(pnum);
	exit (0);                            //Final Desejado
}

