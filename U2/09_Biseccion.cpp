/*  CABECERA DE PROGRAMA
Date: 12/10/2022
Author:UP210063 J* A* C* M*
Description: tablas
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

Ejercicio 9.-
Realizar un programa del metodo de la biseccion para encontrar el punto raiz en una ecuacion 

y=(x+3)(x-4)
y= x2-x-12
*/

#include <iostream>
#include <cmath>

using namespace std;


float resolverEcuacion(float x){
    return pow(x,2) -x -12; 
}

int main(){
    float a = 1 , b = 2 , c = (a+b)/2;
    float yA = resolverEcuacion(a);
    float yB = resolverEcuacion(b);
    float yC = resolverEcuacion(c);

    while (a <= 10)
    {
        /* code */
    cout << yA  << yB << yC << endl;
    }
    
}



