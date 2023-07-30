#include <stdio.h>
#include <stdlib.h>

struct tipo_no{
	int num;
	struct tipo_no*prox;
};

int isEmpty (struct tipo_no *inic, struct tipo_no *fim);

int inserir (struct tipo_no **inic, struct tipo_no **fim, int valor);

int remover (struct tipo_no**inic, struct tipo_no**fim);

int main (void){
	struct tipo_no*inic=NULL, *fim=NULL;
	int pos;
	
	for (pos=1;pos<6;pos++){
		inserir (&inic,*fim,pos);
	}
	printf("Mostrando a fila");
	while(*fim !=NULL){
		pos = remover (&inic, &fim);
		printf ("Valor =%d \n", pos);
	}
	printf ("Fim \n");
	
	return 0;
}


  int remover (struct tipo no **inic, struct tipo no **fim){
int valor;
struct tipo no *remover;
if(*inic == null){
 printf("Fila vazia" \n);
exit (2);
}

if (*fim == *inic ) {     //somente 1 elemento
remover = *fim; 
valor = remover -> num; *inic = null; *fim = null;
}else{

remover = *fim;
while (remover -> prox! =*inic){
remover = remover->prox;
}
*inic = remover;
remover = remvoer->prox;
valor = remover->num;
}
(*inic ) -> prox =null;
free (remover);
return (valor);

