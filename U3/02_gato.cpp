/*
Date: 
Author:UP210063 J* A* C* M*
Description: 
Email: up210063@alumnos.upa.edu.mx
Last modification: ## 
*/
#include <iostream>
using namespace std;

// crea el tablero 
void hacertablero();
// el usuario ingresara en la casilla del 1 al 9 
int seleccionarJugada();
// comprueba si la casilla no esta ocupada  
bool comprobarjugada(int);
// imprime una X o un O en la casilla que selecciono el jugador # seleccionarJugada(); 
void colocarjugada(int);
bool ganar();

// variables globales para el uso 

// tablero del gato 
char estructuragato[6][11];
/*
agrupacion de filas para el tablero en 
                                         1 2 3 
                                         4 5 6 
                                         7 8 9 
*/
char areaJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
// turno del jugador
int turnojugador = 1;
//fila y columna
int row, col;

int main()
{

    bool gameover = false;
    int jugada;
    bool casillaOcupada = true;
    int modo;
    // selecciòn de modos de juego 
    cout << "Tic tac toe \n";
    cout << "1.- SinglePlayer \n";
    cout << "2.- MultiPlayer \n";
    cout << "Choose the number to select the game mode you want to play ? \n";
    cin >> modo;

    // si el usuario selecciona jugar el solo hacer lo siguiente :
    if (modo == 1){
        do
        {
            system("clear");
            if (turnojugador % 2 == !0){
                do
                {
                    hacertablero();
                    jugada = seleccionarJugada();
                    casillaOcupada = comprobarjugada(jugada);
                    if (casillaOcupada == true)
                    {
                        system("clear");
                        cout << "Try Again \n";
                    }
                } while (casillaOcupada == true);
                colocarjugada(jugada);
                gameover = ganar();
            }
            else 
            {
                hacertablero();
            }
        } while (gameover == false and turnojugador < 10);
        system("clear");
        hacertablero();
    }
    // si el usuario selecciona jugar con otra persona (Modo local) hacer lo siguiente :
    else if (modo == 2)
    {
        do
        {
            // elimina los mensajes anteriores de seleccion de modo de juego 
            system("clear");
            do
            {
                // imprimir tablero 
                hacertablero();
                jugada = seleccionarJugada();
                casillaOcupada = comprobarjugada(jugada);
                if (casillaOcupada == true)
                {
                    system("clear");
                    cout << "Try Again \n";
                }
            } while (casillaOcupada == true);
            colocarjugada(jugada);
            gameover = ganar();
        } while (gameover == false and turnojugador < 10);
        system("clear");
        hacertablero();
    }
    // mostrar si gana el jugador 1 o jugador 2 
    if (gameover == true)
    {
        if ((turnojugador - 1) % 2 == 0)
        {
            cout << "Player 2 is the winner " << endl;
        }
        else
        {
            cout << "Player 1 is the winner " << endl;
        }
    }
    else
    {
        cout << "Tie" << endl;
    }
    return 0;
}

void hacertablero()
{
    row = 0;
    col = 0;
    for (int row1 = 0; row1 < 6; row1++)
    {
        for (int col1 = 0; col1 < 11; col1++)
        {
            if (col1 == 3 || col1 == 7)
            {
                estructuragato[row1][col1] = '|';
            }
            else if (row1 == 1 || row1 == 3)
            {
                estructuragato[row1][col1] = '_';
            }
            else if (row1 != 5 && (col1 == 1 || col1 == 5 || col1 == 9))
            {
                estructuragato[row1][col1] = areaJuego[row][col];
                col++;
                if (col == 3)
                {
                    col = 0;
                    row++;
                }
            }
            else
            {
                estructuragato[row1][col1] = ' ';
            }
        }
    }
    for (int row1 = 0; row1 < 6; row1++)
    {
        for (int col1 = 0; col1 < 11; col1++)
        {
            /*
            EStructura original 
            if (estructuragato[row1][col1] == 'X')
            {
                cout << "\033[0;36m" << estructuragato[row1][col1] << "\033[0m";
            }
            else if (estructuragato[row1][col1] == 'O')
            {
                cout << "\033[0;31m" << estructuragato[row1][col1] << "\033[0m";
            }
            else
            {
                cout << estructuragato[row1][col1];
            }
            */

           // estructura simplificada 
            ((estructuragato[row1][col1] == 'X'))? cout << "\033[0;36m" << estructuragato[row1][col1] << "\033[0m" 
                :((estructuragato[row1][col1] == 'O')) ? cout << "\033[0;31m" << estructuragato[row1][col1] << "\033[0m"
                    : cout << estructuragato[row1][col1];
        }
        cout << endl;
    }
}

int seleccionarJugada()
{
    int jugada1;
    do
    {
        cout << "Give me your move: ";
        cin >> jugada1;
    } while (jugada1 > 9 && jugada1 < 0);
    return jugada1;
}

bool comprobarjugada(int jugada)
{
    int fila = 0, columna = 0;
    for (int num_jugada = 1; num_jugada < 10; num_jugada++)
    {
        if (jugada == num_jugada)
        {
            row = fila;
            col = columna;
            break;
        }
        else
        {
            columna++;
            if (columna == 3)
            {
                columna = 0;
                fila++;
            }
        }
    }
    if (areaJuego[row][col] == 'O' || areaJuego[row][col] == 'X')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void colocarjugada(int jugada)
{
    char valorJugada;
    if (turnojugador % 2 == 0)
    {
        valorJugada = 'X';
    }
    else
    {
        valorJugada = 'O';
    }
    int fila = 0, columna = 0;
    for (int num_jugada = 1; num_jugada < 10; num_jugada++)
    {
        if (jugada == num_jugada)
        {
            areaJuego[fila][columna] = valorJugada;
            break;
        }
        else
        {
            columna++;
            if (columna == 3)
            {
                columna = 0;
                fila++;
            }
        }
    }
    turnojugador++;
}

bool ganar()
{
    bool ganar = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if (areaJuego[posicion][0] == areaJuego[posicion][1] && areaJuego[posicion][posicion] == areaJuego[posicion][2])
        {
            ganar = true;
            break;
        }
        if (areaJuego[0][posicion] == areaJuego[1][posicion] && areaJuego[0][posicion] == areaJuego[2][posicion])
        {
            ganar = true;
            break;
        }
    }
    if (areaJuego[0][0] == areaJuego[1][1] && areaJuego[0][0] == areaJuego[2][2])
    {
        ganar = true;
    }
    else if (areaJuego[2][0] == areaJuego[1][1] && areaJuego[2][0] == areaJuego[0][2])
    {
        ganar = true;
    }
    return ganar;
}