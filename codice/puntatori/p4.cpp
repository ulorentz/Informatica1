//operatore *
#include <iostream>
using namespace std;

int main(){
	int* p1;
	int *p2; //anche questa scrittura e' valida

	int a=1;
	p1=&a;
	
	cout << "valore di a: " << a << endl;
	cout << "Indirizzo di a: " << &a << endl;
	cout << "Valore p1: " << p1 << endl;
	cout << "Valore dell'oggetto puntato da p1: " << *p1 << endl; //sto derefenziando il puntatore: vado a leggere l'area di memoria a cui punta
	
	*p1=4; //leggi: scrivi quattro nell'area di memoria puntata da p1
	cout << "Valore di a: " << a << endl;
	
	return 0;
}
