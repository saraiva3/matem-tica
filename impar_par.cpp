#include <iostream>
using namespace std;


//verifica se um numero é par ou impar

int main(){
	
	int digitado;
	cout << "Par ou ímpar?" << endl;
	cout << "Digite um numero inteiro que você deseja verificar: ";
	cin >> digitado;
	
	//se o resto da divisão for igual a 0, é par
	if(digitado % 2 == 0){
		cout << "o numero digitado é par" << endl;
	}else if(digitado % 2 == 1){ // se o resto for = 1, é impar
		cout << "o numero digitado é impar" << endl;
	}
	
	
	return 0;
}
