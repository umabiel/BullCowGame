//
//  main.cpp
//  BullCowGame
//
//  Created by Gustavo Isaias Chalco Apaza on 12/4/16.
//  Copyright © 2016 Gustavo Isaias Chalco Apaza. All rights reserved.
//

#include <iostream>

using namespace std;

// Prototipos de funciones
void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

// Entry Point del Juego
int main(int argc, const char * argv[]) {
    
    PrintIntro();
    do {
        PlayGame();
    } while (AskToPlayAgain());
    
    return 0; // sale de la aplicacion
}

// Implementacion de Prototipos
bool AskToPlayAgain() {
    cout << "Desea seguir jugando (s/n)? ";
    string response = "";
    getline(cin, response);
    // cout << "Si?" << (response[0] == 'S' || response[0] == 's');
    cout << endl;
    
    return (response[0] == 'S' || response[0] == 's');
}

void PlayGame() {
    __cpp_constexpr; int NUMBER_OF_TURNS = 5;
    for (int count =1 ; count <= NUMBER_OF_TURNS; count++) {
        string Guess = GetGuess();
        cout << endl;
    }
    return;
}

void PrintIntro(){
    __cpp_constexpr; int WORLD_LENGTH = 5;
    cout << "Bienvenidos a Toros y Vacas, una juego de palabras.\n";
    cout << "Podras adivinar la palabra de " << WORLD_LENGTH <<" letras en el Isograma que estoy pensando?" << endl;
    return;
}

string GetGuess(){
    cout << "Ingrese su palabra: ";
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}
