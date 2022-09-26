/*  CABECERA DE PROGRAMA
Date: 22/09/2022
Author:UP210063 J* A* C* M*
Description: Funciòn If simple
Email: up210063@alumnos.upa.edu.mx
Last modification: ##
*/

#include <iostream>

using namespace std;
  
    //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >, <=, >=

/*EJERCICIO CON ==

int main(){
    int dato = 1;
    int numero; 

    cout << "ingresa un numero" << endl;
    cin >> numero;

    if (numero==dato){
        cout << "tu numero es igual a dato" << endl;
    }
    else{
        cout << "El número es diferente del dato" << endl;

    }
    return 0;
}
*/

/* EJERCICIO CON !=

int main(){
    int dato =10;
    int numero; 

    cout << "ingresa un numero" << endl;
    cin >> numero;

    if (numero!=dato){
        cout << "tu numero es diferente al dato" << endl;
        
    }
    else{
        cout << "El número es igual al dato" << endl;

    }
    return 0;
}
*/

int main(){

    int dato = 3;
    int numero;

    cout << "Ingresa un numero" << endl;
    cin >> numero;

    if (numero > dato){
        cout << numero << " es mayor a " << dato << endl;
    }   
    if (numero < dato){
        cout << numero << " es menor a " << dato << endl;
    }
    if (numero <= dato){
        cout << numero<< " es menor o igual a " << dato << endl;  
    }
    if (numero >= dato){
        cout << numero<< " es mayor o igual a " << dato << endl; 
    } 

    return 0;
}







































/* Prueba con ciclo 
    while (numero==dato)
    {
        cout << "tu numero es igual a dato" << endl;
        cout << "vuelve a ingresar un numero diferente al que usaste" << endl;
        cin >> numero;
    }
     cout << "tu numero es diferente al dato" << endl;
*/
    