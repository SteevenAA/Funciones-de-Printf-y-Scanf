#include <stdio.h>

int main() {
    // Declarar variables para guardar los 3 tipos de datos
    int ag;
    float he;
    char in;

    // Mensaje de bienvenida al usario
    printf("Bienvenido estudiante de la UNL\n");

    // Solicitud al usario de ingreso de datos para guardarlo como variables
    printf("Ingrese su edad en años: ");
    scanf("%d", &ag); // "%d" para guardar la variable como entera
    printf("Ingrese su altura en metros (1.75): ");
    scanf("%f", &he); // "%f" para guardar la variable como decimal real simple
    printf("Ingrese la inicial de su nombre: ");
    scanf(" %c", &in); // " %c" se deja un espacio al incio para que ignore cantidad de caracteres de espacio en blanco, eso sirve para guardar la variable como caracter

    // Mostrar los valores ingresados
    printf("Los datos obtenidos fueron:\n");
    printf("Edad: %d años\n", ag); // El "%d", hace que represente la variable ag, como entero
    printf("Altura: %.2f metros\n", he); // el "%.2f", hace que represente los 2 primeros numeros del deciaml, debido que muestra los 7 digitos que tiene en verdad
    printf("Inicial del nombre: %c\n", in); // El "%c", hace que repsente la variable in, como caracter

    return 0;
}