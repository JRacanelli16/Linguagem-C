#include<stdio.h>
int main (void){
	int num,qtd=-1,me,ma;
	do{
		qtd++;
		printf ("Digite um numero: ");
		scanf ("%d", & num);
		if (qtd == 0){
			me= num;
			ma = num;
		}
		else  {
			if (num < me){
				me = num;
			}
			if (num > ma){
				ma = num;
			}
		}
	} while ( (num % 2)==0);
	printf ("foram %d erros\n", qtd);
	printf ("O menor = %d\n e \no maior %d \n", me, ma);
	return 0;
}
