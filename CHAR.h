#ifndef CHAR_H
#define CHAR_H
#include <iostream>
#include <string>
#include "STRING.h"
using namespace std;
class CHAR {

	private:
    	char caracter;
    	vector <CHAR> lista;
	public:
    	CHAR();
    	CHAR(char);
    	void agregar(CHAR);
		vector<CHAR> getVector();
		void imprimir();
    	void operator<<(CHAR);
	    void operator<<(char);
	    void operator!();
	    STRING operator+(CHAR);
	    char getChar();
};

#endif