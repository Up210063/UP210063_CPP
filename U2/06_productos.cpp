/*  CABECERA DE PROGRAMA
Date: 05/10/2022
Author:UP210063 J* A* C* M*
Description: Temperaturas 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##


Ejercicio 6.
Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la cantidad
*/

#include <iostream>
using namespace std;

int main(){

    int precio = 0; 
    int cantidad = 0;
    int cantidad_total = 0;
    
    do
    {
        cout << "ingresa tu cantidad de productos" << endl ;
        cin >> cantidad;
        
        if (cantidad !=0 & cantidad >0)
        {
            cout << "ingresa el precio de tu producto" << endl;
            cin >> precio;

        }
        else {
            cout << "tu cantidad no existe" << endl;

        }
            

        cantidad_total += precio*cantidad;


    } while (cantidad !=0);
    
    cout << "tu cantidad total a pagar es de : " << cantidad_total ;
    
    return 0;
}