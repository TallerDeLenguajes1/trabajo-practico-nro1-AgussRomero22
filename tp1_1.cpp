#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *punt=NULL;
	int numero=30;
	punt=&numero;
	printf("%d\n", *punt); //Contenido del puntero
	printf("%p\n", punt); //Dirección de memoria almacenada por el puntero
	printf("%p\n", &numero); //Dirección de memoria de la variable
	printf("%p\n", &punt); //Dirección de memoria del puntero
	printf("%d", sizeof(numero));
/*La dirección de memoria almacenada por el puntero y la dirección de memoria de la variable nos dan
 * el mismo resultado debido a que al puntero se le asigna la dirección de memoria de la variable y
 * se diferencia de la dirección de memoria del puntero porque es otra variable, a cada una se
 * le asigna una dirección de memoria distinta.*/
	return 0;
}