#include <stdio.h>
#include <stdlib.h>

int cuadrado(int x);
void cuadradovoid(int x);
void invertir(int a, int b);
void ordenar(int a, int b);

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	int num, resultado;
	int inv,inv2, orden, orden2;
	int *punt=NULL;
	printf("Ingrese un número:\n");
	scanf("%d",&num);
	punt=&num;
	resultado=cuadrado(num);
	cuadradovoid(num);
	printf("El cuadrado del número ingresado es:%d\n", resultado);
	printf("Dirección de memoria de la variable: %p\n", punt);
	printf("Contenido de la variable:%d\n", *punt);
	printf("Ingrese el primer número para invertir:\n");
	scanf("%d", &inv);
	printf("Ingrese el segundo número para invertir:\n");
	scanf("%d",&inv2);
	invertir(inv,inv2);
	printf("Ingrese el primer número para ordenar:\n");
	scanf("%d", &orden);
	printf("Ingrese el segundo número para ordenar:\n");
	scanf("%d",&orden2);
	ordenar(orden,orden2);
	return 0;
}

int cuadrado(int x){
	return (x*x);
}

void cuadradovoid(int x){
	printf("El cuadrado del número ingresado es:%d", x*x);
}

void invertir(int a, int b){
int aux;
aux=a;
a=b;
b=aux;
printf("El primer número invertido es el siguiente:%d\n", a);
printf("El segundo número invertido es el siguiente:%d\n", b);

}

void ordenar(int a, int b){
	if(a<b){
		printf("Menor:%d",a);
		printf("Mayor:%d",b);
	}
	if(a>b){
		printf("Menor:%d",b);
		printf("Mayor:%d",a);
	}
	if(a==b){
		printf("Los números ingresados para ordenar son iguales\n");
	}

}