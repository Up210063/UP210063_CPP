/*  CABECERA DE PROGRAMA
Date: 22/09/2022
Author:UP210063 J* A* C* M*
Description: Renta 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

los tramos impositivos para la declaracion de la renta 
en un determinado pais son los siguientes:

Renta tipo impositivo
Menos de $10,000 5%
Entre $10,000 y $20,000  15%
Entre $20,000 y $35,000 20%
Entre $35,000 y $60,000 30%
Màs de $60,000 45%

Escribir un programa que pregunte al usuario su renta 
anual y muestre por pantalla el tipo impositivo que 
le corresponde
*/

#include <iostream>
using namespace std;

int main(){

   int porcentaje;
   int rentaAnual;
    int porcentajeInteres;

    cout << " Cual es tu renta anual: " << endl;
    cin >> rentaAnual;

    if (rentaAnual < 10000)
    {
        porcentaje =.05;
    }
    else if (rentaAnual >= 10000 & rentaAnual <20000 )
    {
        porcentaje = .15;
    }
    else if (rentaAnual >= 20000 & rentaAnual <35000)
    {
        porcentaje = .20;
    }
    else if (rentaAnual >= 35000 & rentaAnual < 60000)
    {
        porcentaje = .30;
    }
    else if (rentaAnual >= 60000 )
    {
        porcentaje = .45;
    }
        cout << "el porcentaje anual es : " << porcentaje << endl;
        porcentajeInteres = porcentaje * 100;
        cout << "el interes anual es : " << porcentajeInteres << endl;
    return 0;
}


