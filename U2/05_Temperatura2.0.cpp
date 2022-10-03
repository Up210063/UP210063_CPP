#include <iostream>
using namespace std;

int main(){
    float temperatura;
    int contador = 1;
    float tempeAcum = 0;
    int temperatura_min = 9999, temperatura_max = -9999;

    do
    {
        cout << "give me the temperature" << endl;
        cin >> temperatura;
        tempeAcum +=temperatura;

        contador ++;
        if (temperatura <= temperatura_min)
        {
            temperatura_min=temperatura;
        }
        if (temperatura >= temperatura_max)
        {
            temperatura_max=temperatura;
        }
    } while (contador <=6);
    
    cout << "the average of temperature today is : " << tempeAcum/6 <<endl;
    cout << "la temperatura minima es " << temperatura_min<< endl;
    cout << "la temperatura maxima  es " << temperatura_max << endl;


    return 0;
}