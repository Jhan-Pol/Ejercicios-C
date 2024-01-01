//Librerias
#include <stdio.h>
#include <stdbool.h>
//Protoipos
int menu();
void eleccion(int *n1, int *n2, int *x);
void suma(int *n1, int *n2);
void resta(int *n1, int *n2);
void multiplicacion(int *n1, int *n2);
void division(int *n1, int *n2);
void full(int *n1, int *n2, int *x);
void salir();
//Variables Globales 
int op, num1, num2;
bool key =false;
int *x = &op;
int *n1 = &num1;
int *n2 = &num2;
//Funcion Principal
void main() {
    
//Variables Locales

//Algoritmo
eleccion(n1, n2, x);
}
//Funciones
void full(int *n1, int *n2, int *x) {
    do {
switch(menu()) {
    case 0:
    eleccion(n1, n2, x);
    break;
    case 1: 
    suma(n1, n2);
    break;
    case 2: 
    resta(n1, n2);
    break;
    case 3: 
    multiplicacion(n1, n2);
    break;
    case 4: 
    division(n1, n2);
    break;
    case 5:
    salir();
    break;
}
}while(op!=5);
}
int menu() {
    printf("Digite que desea hacer...\n0=ELEGIR NUMEROS\n1=SUMAR\n2=RESTAR\n3=MULTIPLICAR\n4=DIVISION\n5=SALIR\n");
    scanf("%d",&op);
    return op;
}
void eleccion(int *n1, int *n2, int *x) {
    do {
    printf("DIigite el primer numero\n");
    scanf("%d",&num1);
    printf("Digite el segundo numero\n");
    scanf("%d",&num2);
        if((*n1 == NULL) || (*n2 == NULL) || ((*n1 == 0) && (*n2 == 0))) {
            printf("Por favor digite valores para el primer y segundo numero\n");
            key = true;
        }
        else {
            full(n1, n2, x);
        }
    }while(key == true && *x != 5);
}
void suma(int *n1, int *n2) {
    printf("A continuacion se le mostrara la suma de los dos numeros\n");
    printf("%d + %d = %d\n",*n1, *n2, *n1+*n2);
}
void resta(int *n1, int *n2) {
    printf("A continuacion se le mostrara la resta de los dos numeros\n");
    printf("%d - %d = %d\n",*n1, *n2, *n1-*n2);
}
void multiplicacion(int *n1, int *n2) {
    printf("A continuacion se le mostrara la multiplicacion de los dos numeros\n");
    printf("%d x %d = %d\n",*n1, *n2, *n1**n2);
}
void division(int *n1, int *n2) {
    printf("A continuacion se le mostrara la division de los dos numeros\n");
    printf("%d / %d = %d\n",*n1, *n2, *n1 / *n2);
}

void salir() {
    printf("Ha salido del programa\n");
}
