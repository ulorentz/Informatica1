#include <iostream>
using namespace std;

int main(){
	const int m=3;
	const int n=3;
	int matrix[m][n]; 
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j)
			matrix[i][j]=i*n+j; //inizializzo a zero tutti gli elementi
	}
	cout << "matrix \t\t" << matrix << endl;
//	int **k=matrix;
	int* k[3];
	int **z=k;
	for(int i=0; i<m; ++i)
		cout <<"matrix[" <<i<<"] \t"<< matrix[i]<< endl;
	int *p=matrix[1];
	for(int i=0; i<n; ++i)
		cout << p[i] << "\t";
	cout << endl;


	return 0;
	cout << "matrix[1]\t" << matrix[1] << endl;
	cout << "matrix[1][1]\t" << matrix[1][1] << endl;
	return 0;
}
