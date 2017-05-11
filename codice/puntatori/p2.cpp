//Assegnazione di un indirizzo
#include <iostream>
using namespace std;

int main(){
	float n=12;
	float* p;
	cout << "Valore di n: " << n << endl<<"Indirizzo di n: " << &n << endl;

	p=&n;
	cout << "Valore di p: " << p <<endl<< "Indirizzo di p: " << &p << endl;

	return 0;
}
