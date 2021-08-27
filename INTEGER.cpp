#include "INTEGER.h"
#include <iostream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
using std::vector;
INTEGER::INTEGER() {
}
INTEGER::~INTEGER() {
}
vector<INTEGER> INTEGER::getVector() {
	return this->lista;
}
void INTEGER::agregar(INTEGER num) {
	lista.push_back(num);
}
INTEGER::INTEGER(int numero){
    this->numero = numero;
}
int INTEGER::getValue(){
    return this->numero;
}
void INTEGER::operator<<(int numero){
    this->numero = numero;
}
void INTEGER::operator<<(INTEGER numero){
    this->numero = numero.getValue();
}
void INTEGER::operator!(){
    cout<<to_string(this->numero)<<endl;
}

// operaciones

INTEGER INTEGER::operator+(INTEGER suma){
    INTEGER resultSuma;
    int resultado = numero + suma.getValue();
    resultSuma << resultado;
    return resultSuma;
}

INTEGER INTEGER::operator-(INTEGER resta){
    INTEGER resultResta;
    int resultado = numero - resta.getValue();
    resultResta << resultado;
    return resultResta;
}

INTEGER INTEGER::operator*(INTEGER multi){
    INTEGER resultMulti;
    int resultado = numero * multi.getValue();
    resultMulti << resultado;
    return resultMulti;
}

INTEGER INTEGER::operator/(INTEGER dividir){
    INTEGER resultDividir;
    int resultado = numero / dividir.getValue();
    resultDividir << resultado;
    return resultDividir;
}
