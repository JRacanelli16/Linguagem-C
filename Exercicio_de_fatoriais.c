// RECURSIVIDADE
// exemplo fatorial de 4 ou 4!
// fatorial 4 = 4*3!
// exemplo fatorial

# include <stdio.h>
int fat (int pnum);
int main (void){
	int num, res;
	printf ("digite o valor");
	scanf("%d", & num);
	res = fat (num);
	printf ("resultado %d \n", res);
	return 0;
}

int fat (int pnum){
	if (pnum < 1){
		printf ("Erro!!!\n");
	}
	if (pnum > 2){
		return (pnum * fat(pnum-1));
		 	}else {
		 		return pnum;
		 	}
}
