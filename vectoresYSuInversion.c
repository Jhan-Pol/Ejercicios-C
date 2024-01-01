//PROGRAMA: Retornar un vector al reves y de mas... 
//libreiras
#include <stdio.h>
//Prototipos
int menu(int *o);
void llenarV(int *s, int *v);
void mostrarV(int *s, int *v);
void vectorInvertido(int *s, int *v);
void salir();
//Variables Globales
int n, op;
int *s=&n;
int *o=&op;
//Funcion Principal 
void main() {
//Variables Locales
int vector[n];
int *v=vector;
//Algoritmo
do {
switch(menu(o)) {
    case 1:
    printf("Elija el tamaño para su vector\n");
    scanf("%d",&n);
    llenarV(s, v);
    break;
    case 2:
    if(*s<=0) {
        printf("Aun no ha añadido un vector como para poder mostrarlo. Vuelva a intentarlo\n");
    }
    else {
        mostrarV(s, v);
    }
    break;
    case 3: 
    if(*s<=0) {
    printf("Aun no ha añadido un vector como para poder presentarlo invertido. Vuelva a intentarlo\n");
    }
    else {
        vectorInvertido(s, v);
    }
    break;
    case 4: 
    salir();
    break;
}
}while(*o!=4);
}
//Funciones 
int menu(int *o) {
    printf("Que desea hacer?...\nAñadir un vector=1\nVer ese vector=2\nVer ese vector invertido=3\nSalir=4\n");
    scanf("%d",&*o);
    return *o;
}
void llenarV(int *s, int *v) {
    if(*s==0) {
        printf("Su vector practicamente no existe ya que tiene un espacio de 0. Vuelva a introducir un espacio para este\n\n");
    }
    else {
        printf("A contunuacion llenara el vector...\n");
        for(int i=0; i<*s; i++) {
        scanf("%d",v+i );
        }
    }
}
void mostrarV(int *s, int *v) {
    printf("A continuacion se le mostrara su vector...\n");
    for(int i=0; i<*s; i++) {
        printf("%d\n",v[i]);
    }
}
void vectorInvertido(int *s, int *v) {
    printf("A continiacion se le mostrara su vector invertido...\n");
    for(int i=*s - 1; i>=0; i--) {
        printf("%d\n",v[i]);
    }
}
void salir() {
    printf("Ha salido del programa :)\n");
}