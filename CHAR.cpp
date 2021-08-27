#include "CHAR.h"
CHAR::CHAR(){
	
}

CHAR::CHAR(char caracter){
    this->caracter = caracter;
}

char CHAR::getChar(){
    return this->caracter;
}

void CHAR::operator<<(CHAR caracter){
    caracter = caracter.getChar();
}

void CHAR ::operator<<(char caracter){
   this-> caracter = caracter;
}

void CHAR::operator!(){
    cout << this->caracter << endl;
}

STRING CHAR::operator+(CHAR obtenidos){
    STRING concatenacion;
    string aux = "";
    aux += caracter;
    aux += obtenidos.getChar();
    concatenacion << aux;
    return concatenacion;
}