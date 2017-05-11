#include <iostream>
#define C 12
using namespace std;
int main(){
//	cout << &C << endl;
	cout << &12 << endl;
	const int c=4;
	cout << &c << endl;
	cout << &"Hello World!" << endl;
	cout << &cout << endl;
	return 0;
}
