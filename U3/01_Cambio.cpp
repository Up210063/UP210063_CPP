/*
Date: 
Author:UP210063 J* A* C* M*
Description: 
Email: up210063@alumnos.upa.edu.mx
Last modification: ## 

ingresa una cantidad de dinero y yo te lo regreso desglosado
$380 
= 
500 0
200 1 
100 1 
50  1 
20  1 
10  1
2   0 
1   0
*/

// Library for input and output management.
#include <iostream>

// Use of namespace to avoid std::
using namespace std;

void obtenerCambio(int);
void obtenerMonedas(int);
void imprimirCambio(int);

int quinientos = 0, docientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0;

int main(){
   int dinero;

   cout << "Enter the money: ";
   cin >> dinero;
   
   obtenerCambio(dinero);
   imprimirCambio(dinero);
   
   return 0;
}

void obtenerCambio(int dinero)
{
   do{
      // : else 
      // ? si se cumple la condicion 
     ((dinero - 500) >= 0) ? quinientos++, dinero -= 500 
      : ((dinero - 200) >= 0) ? docientos++, dinero -= 200 
         : ((dinero - 100) >= 0) ? cien++, dinero -= 100 
            : ((dinero - 50) >= 0) ? cincuenta++, dinero -= 50 
               : ((dinero - 20) >= 0) ? veinte++, dinero -= 20 
                  : ((dinero - 10) >= 0) ? diez++, dinero -= 10 
                     : ((dinero - 5) >= 0) ? cinco++, dinero -= 5 
                        : ((dinero - 2) >= 0) ? dos++, dinero -= 2 
                           : ((dinero - 1) >= 0) ? uno++, dinero -= 1 
                              : uno;
   } while (dinero > 0);
}

void imprimirCambio(int dinero)
{
   cout << "El cambio de $" << dinero << " es: \n";
   cout << "Billete de $500: " << quinientos << endl;
   cout << "Billete de $200: " << docientos << endl;
   cout << "Billete de $100: " << cien << endl;
   cout << "Billete de $50: " << cincuenta << endl;
   cout << "Billete de $20: " << veinte << endl;
   cout << "Moneda de $10: " << diez << endl;
   cout << "Moneda de $5: " << cinco << endl;
   cout << "Moneda de $2: " << dos << endl;
   cout << "Moneda de $1: " << uno << endl;
}