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

//Libreria  para manejo de entradas y salidas.
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main(){
    
    //Declarar las variables.
    float porcentaje;
    float rentaAnual;
   
    // ingreso de variable renta 
    cout << " Cual es tu renta anual: " << endl;
    cin >> rentaAnual;
    

    // Razona las variables renta para obtener el porcentaje 
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
    
    // visualizar los resultados 
    cout << "el porcentaje anual es : " << (porcentaje*100) << "%" << endl;
    cout << "el interes anual es : " << (rentaAnual*porcentaje) << endl;

    return 0;
}


