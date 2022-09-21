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
int entero; 
float flotante; 
char caracter;
double grande=3/2;

cout << "Dame un numero entero : " <<endl;
cin >> entero;
cout << "El numero entero ingresado es: " << entero << endl;
cout << "el tamaño del entero es : " << sizeof(entero) << "bytes" << endl;

cout << "============================================" << endl;

cout << "Ingresa un nùmero decimal: " << endl;
cin >> flotante;
cout << "El numero decimal ingresado es: " << flotante <<endl;
cout << "El tamaño del decimal es: " << sizeof(flotante) << "bytes" << endl;

cout << "============================================" << endl;

cout << "Dame un caracter: " << endl;
cin >> caracter;
cout << "tu caracter es: " << caracter << endl;
cout << "El tamaño de tu caracter es: " << sizeof(caracter) << "bytes" << endl;

cout << "============================================" << endl;

cout << "Dame un numero " << endl;
cin >> grande;
cout << "tu caracter es: " << grande<< endl;
cout << "El tamaño de tu caracter es: " << sizeof(grande) << "bytes" << endl;

return 0;
}