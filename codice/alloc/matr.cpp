#include <iostream>
using namespace std;
int main(){
	int n, m;
	n=2;
	m=3; 
	int **matr;
	matr=new int*[n]; //alloco il vettore di puntatori 
	for(int i=0; i<n; ++i)
		matr[i]=new int[m]; //per ogni puntatore del vettore alloco un vettore di interi
	//ora riempio la matrice
	for(int i=0; i<n;++i)
		for(int j=0; j<m; ++j)
			matr[i][j]=i*m+j;
	//stampo
	for(int i=0; i<n;++i){
		for(int j=0; j<m; ++j)
			cout << matr[i][j]  << "\t";
		cout << endl;
	}
	
	//dealloco, attenzione a come!
	for(int i=0; i<n; ++i)	
		delete[] matr[i]; //dealloco ogni vettore di dati
	delete[] matr; //dealloco il vettore di puntatori
	return 0;
}
