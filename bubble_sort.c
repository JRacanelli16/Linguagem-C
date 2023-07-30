//BUBLE SORT
//Este metodo de ordenação recebe este nome pq seu movimento se parece com
//bolhas subindo;
//APENAS O ALGORITMO BUBLE SORT:

#include <stdio.h>


void bubble (int vet[],int tam){
	int troca =1;      //1 = true e 0 = false;
	int pos, aux;
	while (troca ==1){
		troca = 0;
		for (pos=0;pos<tam-1;pos++){
			if(vet[pos+1]<vet[pos]){
				aux = vet[pos+1];
				vet [pos+1]=vet[pos];
				vet[pos]=aux;
				troca=1;
			}
		}
		
	}
	
}
