/*Desarrollar un programa que permita crear un archivo agenda.dat de 
direcciones, cuyos registros constan de los siguientes campos:*/
#include <iostream>

#define MAXCHAR 100

typedef struct AGENDA {
    char nombre[MAXCHAR];
    char edad [MAXCHAR];
    char direccion[MAXCHAR];
    char ciudad[MAXCHAR];
    char telefono[MAXCHAR];
}datos;

int main()
{
    AGENDA datos;
    printf("Ingrese nombre: ");
    scanf("%s", datos.nombre);
    printf("Ingrese edad: ");
    scanf("%s", datos.edad);
    printf("Ingrese direccion: ");
    scanf("%s", datos.direccion);
    printf("Ingrese ciudad: ");
    scanf("%s", datos.ciudad);
    printf("Ingrese telefono: ");
    scanf("%s", datos.telefono);
    return 0;
}



