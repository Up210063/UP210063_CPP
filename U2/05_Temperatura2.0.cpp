/*  CABECERA DE PROGRAMA
Date: 3/10/2022
Author:UP210063 J* A* C* M*
Description: Temperaturas 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta

*/


#include <iostream>
using namespace std;

int main(){
    float temperature;
    int contator = 1;
    float tempeAcum = 0;
    int temperature_min = 9999, temperature_max = -9999;

    do
    {
        cout << "give me the temperature" << endl;
        cin >> temperature;
        tempeAcum +=temperature;

        contator ++;
        if (temperature <= temperature_min)
        {
            temperature_min=temperature;
        }
        if (temperature >= temperature_max)
        {
            temperature_max=temperature;
        }
    } while (contator <=6);
    
    cout << "the average of temperature today is : " << tempeAcum/6 <<endl;
    cout << "the temperature min is " << temperature_min<< endl;
    cout << "the temperature max is " << temperature_max << endl;


    return 0;
}