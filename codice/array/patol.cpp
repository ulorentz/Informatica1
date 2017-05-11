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

	//Calcoli vari del programma...
	//...
	//...

	//Qualcosa non funziona! 
	//Per capirci di piu' controllo cosa c'e' nel vettore iniziale
	for(int i=0; i<=n; ++i)
		cout << v[i] << endl;

	return 0;
}		
