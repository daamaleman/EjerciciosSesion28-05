/*: El director de un colegio, desea un programa de computadora que procese
un archivo de registros denominado calificaciones.dat correspondiente a los diferentes
alumnos de una asignatura, con el fin de obtener la siguiente información:*/

#define MAXREGISTRY 10
#define MAXCHAR 50

typedef struct calificacionesdata{
    char carnet [MAXCHAR];
    char nombre[MAXCHAR];
    char apellido[MAXCHAR];
    float notafinal[MAXCHAR];
};