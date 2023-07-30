//um vetor tambem pode ser escito como apontador

#include <stdio.h>

    
int main (void){
	int vet [5], *ap;
vet [0] = 15;
ap = &vet [1];
*ap = 21;
printf ("Soma = %d \n", vet [0]+vet[1]);
		
return 0;	
}
// A primeira posicao de um vetor é vet[0] ou simplesmente vet,
//pq vet é um apontador ex:




