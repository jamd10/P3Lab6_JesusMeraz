#include <iostream>
#include "INTEGER.h"
#include <string>
#include "STRING.h"
#include "CHAR.h"
using namespace std;

int menu();
int main(int argc, char** argv) {
	INTEGER* lista = new INTEGER();
	int op = menu();
	while(op != 7){
		switch(op){
			case 1:{
				int p;
				cout<<"********** Menu **********"<<endl;
				cout<<"* 1. Suma                *"<<endl;
				cout<<"* 2. Resta               *"<<endl;
				cout<<"* 3. Multiplicacion      *"<<endl;
				cout<<"* 4. Division            *"<<endl;
				cout<<"**************************"<<endl;
				cout<<"Elija una opcion: "<<endl;
				cin>>p;
				INTEGER num1;
    			switch(p){
					case 1:{
						int n;
						int aux1;
						cout<<"Ingrese cantidad del numero: "<<endl;
						cin>>aux1;
						num1<<aux1;
						lista -> agregar(num1);
						
						break;
					}
					case 2:{
						int n;
						int aux1, aux2, aux3;
						cout<<"Ingrese cantidad del numero: "<<endl;
						cin>>aux1;
						num1<<aux1;
						lista -> agregar(num1);
						
						break;
					}
					case 3:{
						int n;
						int aux1;
						cout<<"Ingrese cantidad del numero: "<<endl;
						cin>>aux1;
						num1<<aux1;
						lista -> agregar(num1);
						
						break;
					}
					case 4:{
						int n;
						int aux1;
						cout<<"Ingrese cantidad del numero: "<<endl;
						cin>>aux1;
						num1<<aux1;
						lista -> agregar(num1);
						
						break;
					}
					default: {
						cout<<"Opcion invalida"<< endl;
						break;
					}
				}
				break;
				lista->~INTEGER();
			}
							
			case 2:{
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
					int p;
				cout<<"********** Menu **********"<<endl;
				cout<<"* 1. Suma                *"<<endl;
				cout<<"* 2. Resta               *"<<endl;
				cout<<"* 3. Multiplicacion      *"<<endl;
				cout<<"* 4. Division            *"<<endl;
				cout<<"**************************"<<endl;
				cout<<"Elija una opcion: "<<endl;
				cin>>p;
				INTEGER num1;
    			switch(p){
					case 1:{
						INTEGER numero1, numero2;
						int n;
						int aux1, aux2;
						cout<<"Ingrese cantidad del primer numero: "<<endl;
						cin>>aux1;
						numero1<<aux1;
						cout<<"Ingrese cantidad del segundo numero: "<<endl;
						cin>>aux2;
						numero2<<aux2;
						cout<<"Suma: "<<endl;
						!(numero1 + numero2);
						break;
					}
					case 2:{
						INTEGER numero1, numero2;
						int n;
						int aux1, aux2;
						cout<<"Ingrese cantidad del primer numero: "<<endl;
						cin>>aux1;
						numero1<<aux1;
						cout<<"Ingrese cantidad del segundo numero: "<<endl;
						cin>>aux2;
						numero2<<aux2;
						cout<<"Resta: "<<endl;
						!(numero1 - numero2);
						
						break;
					}
					case 3:{
						INTEGER numero1, numero2;
						int n;
						int aux1, aux2;
						cout<<"Ingrese cantidad del primer numero: "<<endl;
						cin>>aux1;
						numero1<<aux1;
						cout<<"Ingrese cantidad del segundo numero: "<<endl;
						cin>>aux2;
						numero2<<aux2;
						cout<<"Multiplicacion: "<<endl;
						!(numero1 * numero2);
						
						break;
					}
					case 4:{
					
						INTEGER numero1, numero2;
						int n;
						int aux1, aux2;
						cout<<"Ingrese cantidad del primer numero: "<<endl;
						cin>>aux1;
						numero1<<aux1;
						cout<<"Ingrese cantidad del segundo numero: "<<endl;
						cin>>aux2;
						numero2<<aux2;
						cout<<"Division: "<<endl;
						!(numero1 / numero2);
						break;
					}
					default: {
						cout<<"Opcion invalida"<< endl;
						break;
					}
				}
				break;
			}
			case 5:{
				CHAR caracter1;
			    CHAR caracter2;
   				char l1,l2;
   				cout<<"Ingrese el primer caracter: "<<endl;
   				cin>>l1;
   				cout<<"Ingrese el segundo caracter: "<<endl;
   				cin>>l2;
   				caracter1<<l1;
   				caracter2<<l2;
   				cout<<"Acumulado: "<<endl;
   				!(caracter1 + caracter1);
				break;
			}
			case 6:{
				STRING cadena;
				string word;
				cout<<"Ingrese una palabra: "<<endl;
				cin>>word;
				cadena<<word;
				cout<<"Ingrese cantidad de veces a repetir: "<<endl;
				int cant;
				cin>>cant;
				cout<<"Repeticiones: "<<endl;
				!(cadena * cant);
				
				break;
			}
			default: {
				cout<<"Opcion invalida"<< endl;
				menu();
				break;
			}
		}
		op = menu();
	}
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"********** Menu **********"<<endl;
	cout<<"* 1. Agregar Integer     *"<<endl;
	cout<<"* 2. Agregar Char        *"<<endl;
	cout<<"* 3. Agregar String      *"<<endl;
	cout<<"* 4. Operacion Integer   *"<<endl;
	cout<<"* 5. Operacion Char      *"<<endl;
	cout<<"* 6. Operacion String    *"<<endl;
	cout<<"* 7. Salir               *"<<endl;
	cout<<"**************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}