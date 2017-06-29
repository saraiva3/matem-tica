#include <iostream>
using namespace std;


int main(){
	
	//Variaveis do programa
	int num1, num2, soma;
	cout << "Calculadora 1.0 - SOMA" << endl;
	
	//informa o primeiro numero
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	
	//informa o segundo numero
	cout << "Digite o segundo numero: ";
	cin >> num2;
	
	
	//soma os dois numeros
	soma = num1 + num2;
	
	cout << "A soma de " << num1 << " + " << num2 << " = " << soma << endl;
	
	
	return 0;
}
