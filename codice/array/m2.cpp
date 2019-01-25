#include <iostream>
using namespace std;

int main(){
	const int m=2;
	const int n=3;
	int matrix[m][n]; 
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j)
			matrix[i][j]=0; //inizializzo a zero tutti gli elementi
	}
	cout << "matrix \t\t" << matrix << endl;

	for(int i=0; i<m; ++i)
		cout <<"matrix \t\t"<< matrix[m]<< endl;




	return 0;
	cout << "matrix[1]\t" << matrix[1] << endl;
	cout << "matrix[1][1]\t" << matrix[1][1] << endl;
	return 0;
}
