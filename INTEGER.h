#ifndef INTEGER_H
#define INTEGER_H
#include <vector>
#include <iostream>
#include <string>
using namespace std;
using std::vector;

class INTEGER { 
	private:
		int numero;
		vector <INTEGER> lista;
	public:	
		INTEGER();
		INTEGER(int);
		~INTEGER();
		void agregar(INTEGER);
		vector<INTEGER> getVector();
		void imprimir();
		void operator<<(INTEGER);
    	void operator<<(int a);
   		void operator!();
  		INTEGER operator+(INTEGER);
    	INTEGER operator-(INTEGER);
    	INTEGER operator*(INTEGER);
    	INTEGER operator/(INTEGER);
    	int getValue();
    	
	};

#endif