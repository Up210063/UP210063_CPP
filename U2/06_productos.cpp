/*  CABECERA DE PROGRAMA
Date: 05/10/2022
Author:UP210063 J* A* C* M*
Description: Temperaturas 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##
Ejercicio 6.
Realizar un programa que lea indefinidamente cantidades de productos y su price, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la amount
*/

#include <iostream>
using namespace std;

int main(){

    int price = 0; 
    int amount = 0;
    int amount_total = 0;
    
    do
    {
        cout << "introduce your amount of products" << endl ;
        cin >> amount;
        
        if (amount !=0 & amount >0)
        {
            cout << "introduce the price of products" << endl;
            cin >> price;

        }
        else {
            cout << "tu amount dont exist" << endl;

        }
            

        amount_total += price*amount;


    } while (amount !=0);
    
    cout << "your amount total to pay is  : " << amount_total ;
    
    return 0;
}