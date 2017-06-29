#include <iostream>
using namespace std;


int main(){
	
	int n1, n2, resultado;
	char operador;
	
	cout << "Calculadora 2.0 - todas operações básicas!" << endl;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1;
	cout << "Digite o segundo numero: ";
	cin >> n2;
	
	
	/*
	a pessoa escolhe a operação e salvamos num char
	*/
	//pede pro usuario digitar a operação da Calculadora
	cout << "Digite a operação (+, -, *, /): ";
	cin >> operador;
	
	
	//verifica qual operação a ser feita
	
	if(operador == '+'){
		resultado = n1 + n2;
		cout << "A soma é igual: " << resultado;
		
	}else if(operador == '-'){
		resultado = n1 - n2;
		cout << "A subtração é igual: " << resultado;
		
	}else	if(operador == '*'){
		resultado = n1 * n2;
		cout << "A multiplicação é igual: " << resultado;
		
	}else	if(operador == '/'){
		resultado = n1 / n2;
		cout << "A divisão é igual: " << resultado;
		
	}else{
		cout << "A operação desejada não existe!";
	}
	
	
	
	
	return 0;
}
