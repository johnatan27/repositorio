#include <iostream>

using namespace std;


class calculadora{
	//define metodos publicos
	public: 
			float calcular (float, char, float );
			
};

int main (){
	
	char operador;
	float numero1, numero2, resultado;
	
	calculadora objcalculadora;
	
	
	cout<< "ingrese los valores por ejemplo (1+1)"<<endl;
	
	cin>> numero1 >> operador >> numero2;
	
	resultado = objcalculadora.calcular(numero1,operador,numero2);
	
	cout <<" este resultado es "<< resultado <<endl;
	
	
}
//define metodo publico de la clase 
float calculadora:: calcular(float intnumero1, char chroperador, float intnumero2){
	
	switch(chroperador){
		case '+' :
			return intnumero1 + intnumero2;
		case '-':
			return intnumero1 - intnumero2;
		case '*':
			return intnumero1 * intnumero2;
		case '/':
		
			if (intnumero2 == 0){
				cout<<"no se puede dividir";
				return 0;
			}
				else 
				return intnumero1 / intnumero2;
			
		
		default :
			return 0;				
	}
	
}
