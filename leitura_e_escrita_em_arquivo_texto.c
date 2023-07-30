//leitura e escrita em arquivo texto

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000

int main (void){
	char nome [81], linha [TAMANHO];
	int opc;
	FILE*arq;
    
	
	printf ("Digite o nome do arquvo: ");
	scanf ("%s", &nome);
	if ((arq = fopen(nome,"w"))==NULL){
		printf ("Arquivo [%s] nao pode ser alterado!\n", nome);
		return -1;
	}
	opc = 1;
	while (opc !=0){
		printf ("Digite algo: ");
		scanf (" %[^\n]", &linha);
		linha[strlen(linha)]= '\n'; //Insere "nova linha"
		if (fputs(linha, arq)==EOF){
			printf ("Erro de escrita\n!");
			(void)fclose(arq);
			return-2;
		}
		printf ("Deseja inserir outra linha(0= NAO e 1=SIM): ");
		scanf ("%1d", &opc);
	}
	(void)fclose (arq);
	
	return 0;
}
