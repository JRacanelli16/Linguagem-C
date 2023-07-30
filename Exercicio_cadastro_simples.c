#include <stdio.h>
int	funcum ();
void funcdois (int p_num);

int main (void){
   int num;
   num = funcum();
   funcdois(num);
	
   return 0;
}

int funcum (){
	int numero;
	printf ("digite o seu ano de nascimento ");
	scanf ("%d", &numero);
	return numero;
}

void funcdois (int p_num){
	printf("%d\n",2022 - p_num);
	
}

