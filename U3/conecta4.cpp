/*
Date: 
Author:UP210063 J* A* C* M*
Desc{}ription: 
Email: up210063@alumnos.upa.edu.mx
Last modification: ## 
*/

#include <iostream>
#include <link.h> // libreria para el reloj de carga
#include <stdalign.h>
using namespace std;

//variables
int gamemode; //seleccion para escojer singleplayer o localmode
//funciones para main
int modosjuegos();

int main(){
    int segundos;

    // mostrar mensajes de bienvenida 
   cout << "\033[0;35m" << "\t \t \t \t Welcome to the game CONNECT 4 \n" << "\033[0m";
   cout << "\033[0;29m" << " Please type a number to select a gamemode \n" << "\033[0m";
   cout << "\033[0;31m" << " 1.- SinglePlayer \n 2.- Local Mode\n" << "\033[0m"; 
   cout << "GameMode : " ;
   cin >> gamemode;
 
   system ("clear"); //limpia pantalla del menu de elegir juego 

   //seleccionar modos de juego 
     if (gamemode == 1)
    {
        cout << "a";
    }
    else if (gamemode == 2)
    {
        int segundos=5;
        cout << "you select LocalMode please wait for a board make";
        
        for(int i=0; i<=21; i++){
            cout << "\n";
            cout << "\t\t\t\t   CARGANDO...\n";
        }
        for(int i=0; i<=79; i++){
            cout << "_";
        }
    for(int i=0; i<=79; i++)
    {
        cout<<char(219);
        Sleep(segundos*1000/80);
    }
        cout<<"\nCompletado!";
    }
    else{
        cout << "please select a other number in the menu again";
    }
    

   return 0;
}
    
   
