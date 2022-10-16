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
    double score;
    double performance;

    cout << "introduce your score"<< endl;
    cin >> score;
    performance = score*2400;
    

    //evaluar funciones para puntuacion 

    if (score == 0.0)
    {
        cout << "your performance are unacceptable" << endl; 
    }
    else if (((score==0.4)||(score >= 0.6))&&(score <=1))
    {
        if ((score >= 0.6) && (score <=1))
    {
        cout << "your performance are meritorious" << endl;  
    } else{
        cout << "your performance are acceptable" << endl;
        
    }
    }
    cout << "your performance (money) is to  " << performance; 
    return 0;
}