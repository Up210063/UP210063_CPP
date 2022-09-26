/*  CABECERA DE PROGRAMA
Date: 26/09/2022
Author:UP210063 J* A* C* M*
Description: Renta 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

En una determinada empresa, sus empleados son evaluados al final de cada año. 
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, 
traduciéndose en mejores beneficios. Los puntos que pueden conseguir 
los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios 
entre las cifras mencionadas. A continuación se muestra una tabla con los 
niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntuación del nivel.

Nivel	Puntuación
Inaceptable	0.0
Aceptable	0.4
Meritorio	0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, 
así como la cantidad de dinero que recibirá el usuario.
*¡Muchas gracias por preferirnos! Esperamos poder servirte nuevamente.

*/

#include <iostream>
using namespace std;

int main(){
    double puntuacion;
    double rendimiento;

    cout << "ingresa tu puntuacion"<< endl;
    cin >> puntuacion;
    rendimiento = puntuacion*2400;
    

    //evaluar funciones para puntuacion 

    if (puntuacion == 0.0)
    {
        cout << "tu rendimiento es inaceptable" << endl; 
        cout << "tu rendimiento es de " << rendimiento;
    }
    else if (((puntuacion == 0.4) || (puntuacion >= 0.6)) && (puntuacion <=1))
    {

        if ((puntuacion >= 0.6) && (puntuacion <=1))
    {
        cout << "tu rendimiento es meritorio" << endl;
        cout << "tu rendimiento es de " << rendimiento;   
    } else{
        cout << "tu rendimiento es aceptable" << endl;
        cout << "tu rendimiento es de " << rendimiento;
    }
    }
    return 0;
}