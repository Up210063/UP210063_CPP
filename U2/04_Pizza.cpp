/*  CABECERA DE PROGRAMA
Date: 29/09/2022
Author:UP210063 J* A* C* M*
Description: Juegos 
Email: up210063@alumnos.upa.edu.mx
Last modification: ##

La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación.

 Ingredientes vegetarianos: Pimiento y tofu.
 Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.

Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en
función de su respuesta le muestre un menú con los ingredientes disponibles para que elija.
Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas la
pizzas.
Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva

*/

#include <iostream>
using namespace std;

int main(){
    
    // its a selected pizza 
    int tipo;

    string tipo_1;
    
    string tipo_2;
    // selection to pepper or tofu 
    int ingrediente_vegetariano;
    //confirm the pepper or tofu || pepperoni, ham and salmon
    string ingrediente_extra;
    // selection peperoni, ham and  Salmon.
    int ingrediente_no_vegetariano;
    
    

    //Welcome to Bella Napoli 
    cout << "Welcome to Pizzas Bella Napoli" << endl << "What pizza do you like? Vegetarian or Not vegetarian" << endl;
    cout << "if you choose the vegetarian pizza enter number 1" << endl << "if you choose the not vegetarian pizza enter number 2" << endl;
    cin >> tipo;

    //choose vegetarian pizza
    if (tipo == 1)
    {
        tipo_1 = "vegetarian";
        cout << "All include mozarella and tomato."<< endl;
        cout << "The ingredients are: \n";
        cout << "1.-Pepper. \n";
        cout << "2.-Tofu. \n";
        cout << "choose the number do you like in your pizza" << endl;
        cin >> ingrediente_vegetariano;

        //choose ingredient pepper

        if (ingrediente_vegetariano == 1)
        {
            ingrediente_extra = "pepper";
        }   
        //choose tofu
        else if (ingrediente_vegetariano == 2)
        {
            ingrediente_extra = "tofu";
        }
   }
    else if (tipo == 2)
    {
        tipo_2="no vegetarian";
        cout << "All include mozarella and tomato."<< endl;
        cout << "The ingredients are: \n";
        cout << "1.-Pepperoni. \n";
        cout << "2.-Ham. \n";
        cout << "3.- Salmon. \n";           
        cout << "choose the number do you like in your pizza" << endl;
        cin >> ingrediente_no_vegetariano;

        //choose ingredient pepperoni

        if (ingrediente_no_vegetariano == 1)
        {
            ingrediente_extra = "pepperoni";
        }   
        //choose ingredient ham
        else if (ingrediente_no_vegetariano == 2)
        {
            ingrediente_extra = "ham";
        }
        //choose ingredient salmon
        else if (ingrediente_no_vegetariano == 3)
        {
            ingrediente_extra = "salmon";
        }
   }
    else
    {
        cout << "your type of pizza dont exist" << endl;
    }

    //print your type of pizza and your extra ingredient
    if (tipo == 1 )
    {   
        cout << "Your type of pizza is " << tipo_1 << endl;
        cout << "Your ingredients of pizza are " << ingrediente_extra << ", mozarella and tomato. \n";
    }
    else
    {
        cout << "Your type of pizza is " << tipo_2 << endl;
        cout << "Your ingredients of pizza are " << ingrediente_extra << ", mozarella and tomato. \n";
    }
    
    return 0;
}
