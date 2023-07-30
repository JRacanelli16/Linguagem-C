#include <stdio.h>
#include <time.h>

#define False 0   //False = zero
#define True 1    //True = qualquer valor diferente de zero

void insertion_sort( int vet[], int tamanho );

void mostrar_vet( int vet[], int tamanho );

int main(void) {
   struct timeb start, end;
   int tam = 50000;
   int contador, vetor1[tam], vetor2[tam], dif;
	      
   for(contador = 0; contador < tam; contador++){
      vetor1[contador] = rand();
      vetor2[contador] = rand();
   }
   
   ftime(&start);
   insertion_sort( vetor1, tam );
   ftime(&end);
   dif = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));
   printf("\nTempo gasto [insertion_sort]: %d ms.\n", dif);
   mostrar_vet(vetor1, 10);

   return 0;
}

void mostrar_vet( int vet[], int tamanho ){
   int pos;
   for( pos = 0; pos < tamanho; pos++ ){
      printf("%d, ", vet[pos] );
   }
   printf("...\n");
}
 
void insertion_sort( int vet[], int tamanho ){
// insertion_sort (vet[], tamanho)
//    VARIÁVEIS: ext_N, int_N, aux
//   para ext_N de 1 até (tamanho-1) faça
//     aux recebe vet[ext_N];
//       int_N recebe ext_N-1;
//       enquanto ( int_N >= 0 e aux < vet[j] ) faça
//          vet[int_N+1]:= vet[int_N];
//          int_N recebe int_N-1;
//       fim_enquanto
//       vet[int_N+1] recebe aux;
//    fim_para
//fim

   int ext_N, int_N, aux;
   for (ext_N = 1; ext_N <= tamanho-1; ext_N++){
      aux = vet[ext_N];
      int_N = ext_N-1;
      while( int_N >= 0 && aux < vet[int_N] ) {
         vet[int_N+1] = vet[int_N];
         int_N--;
      }
      vet[int_N+1] = aux;
   }
}

