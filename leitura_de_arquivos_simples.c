#include <stdio.h> 
#include <stdlib.h>
#define TAMANHO 1000

int main (void){
	char nomearq [81], linha [TAMANHO];
	FILE *arqEntrada;
	int cont=0;
	
	printf ("Digite o nome do arquivo a ser lido :");
	scanf ("%s", &nomearq);
	
	if ((arqEntrada = fopen(nomearq, "r"))==NULL){
		printf ("Arquivo [%s] nao pode ser alterado!\n", nomearq);
		return -1;
	}
	
	while (!feof(arqEntrada)){     //feof = file end of file
	if (fgets (linha, TAMANHO, arqEntrada)){
		printf ("%s", linha);
		cont++;	
	}
	}
	printf ("\tO numero de linhas do arquivo eh:%d ", cont);
	
	(void)fclose(arqEntrada);
	
	return 0;
	}
