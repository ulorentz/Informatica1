#include <iostream>
using namespace std;

int main(){
	int array[5];
	
	cout << "Array:\t\t\t\t" << array << endl;
	for(int i=0; i<5; ++i)
		cout << "Indirizzo " << i+1 << "-esimo elemento:\t" << &(array[i]) << endl;

	return 0;
}
