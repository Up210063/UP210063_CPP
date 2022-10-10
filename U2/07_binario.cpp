/*  CABECERA DE PROGRAMA
Date: 05/10/2022
Author:UP210063 J* A* C* M*
Description: Juegos 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

Ejercicio 7.
Realice un programa que realice la conversión de decimal a binario, solo para números
enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un
conjunto de caracteres.

*/

#include <iostream>
using namespace std;

int main(){
    int resultado;
    int num;

    
    while (num != 0)
    {
        if (num%2 == 0)
        {
            resultado = "0" + resultado;
        }
        else 
        {
            resultado = "1" + resultado;

        }
    }
    
    cout << resultado;
    return 0;
}