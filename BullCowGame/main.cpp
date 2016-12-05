//
//  main.cpp
//  BullCowGame
//
//  Created by Gustavo Isaias Chalco Apaza on 12/4/16.
//  Copyright © 2016 Gustavo Isaias Chalco Apaza. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // Introduccion al programa
    __cpp_constexpr; int WORLD_LENGTH = 5;
    cout << "Bienvenidos a Toros y Vacas, una juego de palabras.\n";
    cout << "Podras adivinar la palabra de " << WORLD_LENGTH <<" letras en el Isograma que estoy pensando?" << endl;
    
    // Obteniendo la entrada del usuario
    cout << "Ingrese su palabra: ";
    string Guess = "";
    getline(cin, Guess);
    
    cout << "Ingresaste: " << Guess;
    
    
    cout << endl;
    
    return 0;
}
