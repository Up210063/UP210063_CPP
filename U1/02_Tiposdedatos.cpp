/* Cabezera del programa 
Date: 15/09/2022
Author:UP210063 J* A* C* M*
Description: Tipos de datos ejercicio
Email: up210063@alumnos.upa.edu.mx
Last modification: ##
*/

//libreria para usar entradas y salidas en el programa en iostream (cin and cout) y stdio.h (printf and scanf)
#include <iostream>
#include <stdio.h>

//uso del namespace para evitar usar std:: en todas las entradas y salidas
using namespace std;

//funcion principal de tipo entero 

int main(){

int entero = 4;
float flotante = 2.565465654654;
double grande = 2.565465654654;
char caracter = 64;

cout << "Este programa muestra los tipos de datos. \n";

cout << "El nùmero entero es:" << entero << endl;
cout << "El tamaño del entero es :" << sizeof(entero)<< "bytes" << endl;

cout << "El numero flotante es:" <<flotante << endl;
cout << "El tamaño del flotante es:" << sizeof(flotante) << "bytes" <<endl;

cout << "El numero del double es:" <<grande<< endl;
cout << "El tamaño del double es:" <<sizeof(grande)<< "bytes" <<endl;

cout << "El caracter char es:" << caracter << endl;
cout << "El tamaño del char es:" << sizeof(caracter) << "bytes" <<endl;

cout << "=================" << endl;

printf("Usando la funcion printf \n");

printf("El nùmero entero es: %i \n", entero);
printf("El numero flotante es: %3.1f \n", flotante );

//Al ser una función debe retornar un valor, en este caso 0
return 0;
}