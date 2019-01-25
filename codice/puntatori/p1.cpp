//Dimensione puntatori
#include <iostream>
using namespace std;
int main(){
	int* a;
	double* b;
	char* c;
	float* d;
	cout << "Dimensione Puntatori:"
		 << "ad intero: " << sizeof a << endl
		 << "a double: " << sizeof b << endl
		 << "a char: " << sizeof c << endl
		 << "a float: " << sizeof d << endl;
	return 0;
}
