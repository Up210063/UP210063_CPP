/*
Date: 
Author:UP210063 J* A* C* M*
Desc{}ription: 
Email: up210063@alumnos.upa.edu.mx
Last modification: ## 
*/

#include <iostream>
using namespace std;

void hacertablero();
int main(){

    char estructuragato[6]/*6 en row*/ [11] /*11 en col */;
    
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            
            if (col == 3 || col == 7){
                estructuragato[row][col]='|';
            }else if (row==1 || row == 3){
                estructuragato[row][col]='_';
            }
            else {
               estructuragato[row][col]=' '; 
            }
            
        
        }
    }
    for (int row = 0; row < 6; row++)
    {
        for (int  col = 0; col < 11; col++)
        {
            cout << estructuragato[row][col];
        }
        cout << endl;
    }
    return 0;
}

void hacertablero(){

}