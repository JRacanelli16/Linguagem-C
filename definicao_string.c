//processamento de texto em linguagem C, 'C' nao possui o tipo "string"
//entao usamos vetor de caracteres para armazenar texto 
//Para ler e mostrar um caractere usamos a letra  "c" minuscula.
//exemplo char letra= 'a; 
//O tipo char é usado para definir uma variavel capaz de armazenar um caractere
//(letra numero ou outros simbolos, tais como &,!,? e \)
//Entao, se um char armazena uma letra, um vetor de char armazena texto
//Ex: char nome[50] = " Antonio carlos", 
//Para mostrar um caractere usamos a mascara "c", printf ("%c",letra);
//Para ler um caractere podemos usa scanf() ou getchar();
//exemplos scanf ("%d", & letra);
//               letra = getchar ();
//A comparaçao de caractere pode ser feita com "==" ou "!=",
//mas a comaparação de texto (vetor de caracteres) precisa de funçao propria
//chamada STRCMP() ou STRNCMPU ().
// Exemplo completo sobre char:
	
#include <stdio.h>
int main (void){
	char letra = 'a';
	printf ("%c\n", letra);
	printf ("%d\n", letra);
	letra = getchar();
	printf ("Digite um caractere: " );
	scanf ("%c", letra);
	scanf ("%d", letra);
	return 0;	
}
