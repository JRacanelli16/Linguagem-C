//Insere no em lista ligada
#include <stdio.h>
#include <stdlib.h>
struct tipo_no{
   int num;
   struct tipo_no *prox;
};
struct tipo_no *insereNo(struct tipo_no **parmHead);
int main(void){
   int pos;	
   struct tipo_no *head = NULL, *nova;
   for( pos = 0; pos < 5; pos++ ){
      nova = insereNo(&head);
	  nova->num = rand();
   }
   nova = head;
   while( nova != NULL){ //Passeio pela lista ligada
      printf("Valor: %d \n", nova->num);
      nova = nova->prox;
   }
   return 0;  	
}
struct tipo_no *insereNo(struct tipo_no **parmHead){
   struct tipo_no *novo;
   if( ! (novo = malloc( sizeof(struct tipo_no)) )) {
      printf("Sem mem�ria!\n");
      exit(1);
   }
   novo->prox = *parmHead;
   *parmHead = novo;
   return novo;
}

