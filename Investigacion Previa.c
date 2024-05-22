//1. Funciones printf, scanf

//-----------------------------------------

//printf: Se utiliza para imprimir datos a la salida estándar (generalmente la consola)
//Ejemplo corto:

#include <stdio.h> //Entrada y salida de datos

int main(){
int nu = 1; //Declarar variable como entera
printf("La variable guardada en el sistema es: %d\\n", nu); //Imprimir la variable antes mencionada como entera

//-----------------------------------------

//scanf: Se utiliza para leer datos de la entrada estándar (generalmente el teclado).
//Ejemplo corto:

int num; // Declarar variable como entera
printf("Ingresa una variable numérica aleatoria: ");
scanf("%d", &num); // Leer la variable como entera
printf("La variable ingresada fue: %d\\n", num); // Imprimir la variable como entera

//-----------------------------------------

//2. Diferentes tipos de datos en C

//Existen 5 tipos de datos que podemos usar que serían:

//Int es una variable de dato que guarda números enteros del - 32768 a 32767
int n1;
n1 = 293;

//long es una variable de dato que guarda números enteros largos del - 2147483648 a 2147483647
long n2;
n2 = 214748647;

//float es una variable de dato que guarda números reales decimales del -3,4·10^38 a 3,4·10^38
float n3;
n3 = 1.75;

//double es una variable de dato que guarda números reales decimales dobles del -1,79·10^308 a 1,79·10^308
double n4;
n4 = 99.99;

//char es una variable de dato que guarda caracteres alfanuméricos del 0 a 255
char n5;
n5 = 'A';

//-----------------------------------------

return 0;
}