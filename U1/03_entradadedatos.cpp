/*  CABECERA DE PROGRAMA
Date:20/09/2022
Author:UP210063 J* A* C* M*
Description: entrada de datos 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##
*/


#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
int entero; float flotante;

cout << "Dame un numero entero : " <<endl;
cin >> entero;
cout << "El numero entero ingresado es: " << entero << endl;
cout << "el tamaño del entero es : " << sizeof(entero) << "bytes" << endl;

cout << "============================================" << endl;

cout << "Ingresa un nùmero decimal: " << endl;
cin >> flotante;
cout << "El numero decimal ingresado es: " << flotante <<endl;

cout << "============================================" << endl;

return 0;
}