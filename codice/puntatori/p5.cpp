#include <iostream>
using namespace std;

int main(){
	int a=1;
	int* p=&a;
	int* p2=NULL; //p2 inizializzato a puntare ``da nessuna parte''
	*p=2; //cambio valore in a
	p=NULL; //ora p non punta da nessuna parte
	cout << *p << endl; //provo ad accedere all'area di memoria puntata ora, cosa succede?
	
	return 0;
}
