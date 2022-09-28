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
    
    //declare variables
    float Tax;
    float AnnualRent;
   
    // introduce the rent account 
    cout << " What is your AnnualRent: " << endl;
    cin >> AnnualRent;
    

    // the variables are validated by the functions 
    if (AnnualRent < 10000)
    {
        Tax =.05;
    }
    else if (AnnualRent >= 10000 & AnnualRent <20000 )
    {
        Tax = .15;
    }
    else if (AnnualRent >= 20000 & AnnualRent <35000)
    {
        Tax = .20;
    }
    else if (AnnualRent >= 35000 & AnnualRent < 60000)
    {
        Tax = .30;
    }
    else if (AnnualRent >= 60000 )
    {
        Tax = .45;
    }
    
      // you can see the results in this part 
    cout << "your Annual Tax is : " << (Tax*100) << "%" << endl;
    cout << "your AnnualRent with Tax is : " << (AnnualRent*Tax) << endl;

    return 0;
}


