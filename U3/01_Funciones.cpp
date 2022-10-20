
/*
Date: 20 octubre 2022
Author:UP210063 J* A* C* M*
Description: 
Email: up210063@alumnos.upa.edu.mx
Last modification: ## 
*/

#include <iostream>
using namespace std;

//prototipado
int getMaxVal(int num1, int num2);
int getMinVal (int num1,int num2);

//funcion principal 
int main(){
    int num1,num2,valorMaximo,valorMinimo;

    cout << "ingresa un numero : ";
    cin >> num1;

    cout << "ingresa otro numero : ";
    cin >> num2;

    cout << "\n ================ \n";

    valorMaximo= getMaxVal(num1,num2);
    valorMinimo = getMinVal(num1,num2);
    cout << "El valor máximo es: " << valorMaximo << "y el valor minimo es : " << valorMinimo <<endl;
    return 0;
}

int getMaxVal(int num1, int num2){
    int valorMaximo;
    if (num1 > num2){
        valorMaximo = num1;
    }else{
        valorMaximo = num2;
    }
    return valorMaximo;
}

int getMinVal(int num1,int num2){
    int valorMinimo;
    if (num1 < num2){
        valorMinimo = num1;
    }else{
        valorMinimo = num2;
    }
    return valorMinimo;


}