//ex: elabore um programa com duas funçoes, uma para carregar um vetor
//e outra funçao que mostra a media deste vetor 

#include <stdio.h>
void carregavetor (float vet[], int tam);
void mostravetor (float vet[], int tam);
void mostra (float vet[], int tam);

int main (void){
	int pos;
	float vetnotas[10];
	carregavetor (vetnotas, 10);
	mostra (vetnotas,10);
	mostravetor (vetnotas, 10);
	return 0;
}

void carregavetor (float vet[], int tam ){
	int pos;
	for (pos=0; pos < tam; pos ++){
		printf (" Digite a %d  Nota", pos+1);
		scanf ("%f", & vet[pos]);
	}
}


void mostravetor (float vet[], int tam){
	int pos;
    float maior, menor;
    for (pos=0; pos < tam; pos++){
    	if (pos == 0){
    		
    		menor = vet [0];
    		maior = vet [0];
    	}
    	else{
    		if(vet[pos] > maior){
    			maior = vet[pos];
    		}
    		if (vet[pos] < menor){
    			menor = vet[pos];
    		}
    	}
    }
    printf ("Menor nota = %5.2f \n", menor);
    printf ("Maior nota = %5.2f \n", maior);
}

void mostra (float vet[], int tam){
	int pos;
	for (pos=0; pos < tam; pos++){
		printf ("Nota %d = %5.2f \n", pos+1,vet [pos]);
	}
}



