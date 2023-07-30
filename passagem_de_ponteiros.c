// exemplo 1
#include <stdio.h>
void func ( int *parmRef, int parmVal);

int main (void){
	
	func ( &num1, num2);
	
	printf ("Resultado num: %d \n", num1);
	printf ("Resultado num2: %d \n", num2);
	
	return 0;

}

void func( int *parmRef, int parmVal){
	*parmRef=8;
   	 parmVal=9;
}





























