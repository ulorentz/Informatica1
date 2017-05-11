#include <iostream>
using namespace std;

int main(){
	const int n=6;
	int v[n+1]; 	//vettore di dati
	int matr[n][n]; //matrice di risultati

	for(int i=0; i<=n; ++i)
		v[i]=i; //inizializzo l'array al valore che ci serve, nell'esempio uso "i" giusto per riempirlo di qualcosa
	
	//Altro codice...
	//...

	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; ++j)
			matr[i][j]=0; //inizializzo gli elementi della matrice tutti a zero, saranno i calcoli del programma a riempirla
	}

	//CODICE di controllo, che succede alle aree di memoria?
	cout << "Indirizzo v: \t\t" << v << endl; //stampo l'indirizzo del primo elemento del vettore v
	cout << "Indirizzo matr[n-1]: \t"<< matr[n-1] << endl; //matr[n-1] e' un vettore (puntatore), l'n-esimo vettore: stampo l'indirizzo dell'area di memoria del primo elemento dell'n-esimo vettore
	cout << "Indirizzo matr[n]:\t" << matr[n] << endl; //Indirizzo "out of range"
	
	//...
	//...
	
	return 0;
}		
