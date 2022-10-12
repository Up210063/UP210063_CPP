/*  CABECERA DE PROGRAMA
Date: 12/10/2022
Author:UP210063 J* A* C* M*
Description: tablas
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

Ejercicio 8.
usuario ingresa 2 numeros, numero 1 es el N veces que se multiplicara y el numero 2 el valor que lo hara 
numero 1 = 5 
numero 2 = 10

5/10

1 x 5
2 x 5
3 x 5
...
10 x 5

*/

#include <iostream>
using namespace std;

int main(){
    // variables in the program
    int numero1;
    int numero2;
    
    // introduce the nunmbers 
    cout << "introduce el numero que quieres multiplicar" << endl;
    cin >> numero1;

    cout << "introduce el numero de veces que deseas multiplicarlo" << endl;
    cin >> numero2;


    for ( int i = 1; i <= numero2; i++)
    {
        
        for (int j = 0; j <=41; j++)
        {
            cout << "-";
        }
        cout << "\t";
        cout << "\n";
    


        cout <<"| "<< i   <<"\t X \t"<< numero1 << "\t = \t" <<  numero1 * i  << "\t |"  <<endl;
        for (int j = 0; j <=41; j++)
        {
            cout << "-";
        }
        cout << "\t";
        cout << "\n";
    }
    return 0;
} 