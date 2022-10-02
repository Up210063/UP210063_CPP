/*CABECERA DE PROGRAMA
Date: 30/09/2022
Author:UP210063 J* A* C* M*
Description: Temperaturas
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

Ejercicio 5.
Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta.
while y do while

*/
#include <iostream>
using namespace std;

int main(){
    int temperatura ;
    int no_Temperatura = 1;
    float temperatura_Promedio;

    // condition to introduced the temperatures
    while (no_Temperatura <= 6)
    {
        cout << "Ingrese la temperatura" << endl;
        cin >> temperatura;

        no_Temperatura ++;
        temperatura_Promedio += temperatura;
    }
    
    cout << "La temperatura promedio es de : " << temperatura_Promedio/6;



    return 0;
}