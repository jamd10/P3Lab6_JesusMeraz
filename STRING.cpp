#include "STRING.h"
STRING::STRING(){
	
}

STRING::STRING(string cadena){
	
    this->cadena = cadena;
}

string STRING::getCadena(){
    return this->cadena;
}

void STRING::operator<<(STRING cadena){
    cadena = cadena.getCadena();
}

void STRING::operator<<(string cadena){
   this-> cadena = cadena;
}

STRING STRING::operator*(int cant){
    string temp;
    STRING repedido;
    for (int i = 0; i < cant; i++)
    {
        temp += cadena;
    }
    repedido << temp;
    return repedido;
}

void STRING::operator!(){
	cout << this->cadena<<endl;
}
