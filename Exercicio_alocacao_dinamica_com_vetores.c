//Crie um programa em C para ler 10 valores para um vetor de 10 posiçoes
//de inteiros alocada dinamicamente. Ao final do processamento mostre
//o maior valor e libere a area liberada

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int *apv;
	int maior;
	int pos;
	if (!(apv = malloc( 10 * sizeof(int)))){
		printf ("Faltou Memoria!\n");
		exit (1);                            
	}
	for (pos=0;pos <10; pos++){
		printf ("Digite %d Valores: \n", pos);
		scanf ("%d", &apv[pos]);
		
		if (pos==0){
	    	maior = apv[pos];
	    }
	    if (maior < apv[pos]){
	    	maior = apv[pos];
	    }
	}

   
    
    
	printf ("Maior = %d \n", maior);
    free (apv);
	exit (0);
}
