/*Desarrollar un programa que permita ingresar y almacenar 5 registros 
de información en el archivo agenda.dat, luego abrir el archivo e
imprimir a pantalla todos los registros.*/

#define MAXREGISTRY 5
#define MAXCHAR 50

typedef struct {
    char nombre[MAXCHAR];
    char edad [MAXCHAR];
    char direccion[MAXCHAR];
    char ciudad[MAXCHAR];
    char telefono[MAXCHAR];
} ;