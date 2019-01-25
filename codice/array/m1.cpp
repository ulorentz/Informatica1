#include <iostream>
using namespace std;

int main(){
	const int m=3;
	const int n=4;

	int matrix[m][n];
	for(int i=0; i<m; ++i){ //scorro sull'array di array, se i=0 sono sul primo array, se vale 1 sul secondo e cosi via
		for(int j=0; j<n;++j) //Scorro sugli elementi di ogni array, nota: uso la variabile j (diversa da i)! ricordi il discorso degli scope? i e' visibile qua dentro?
			matrix[i][j]=i*n+j; //riempio
	}
	
	//ora voglio stampare come fosse una tabella, una matrice di m righe e n colonne
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j)
			cout << matrix[i][j]<<"\t"; //spazio di tab tra elementi
		cout << endl; // mando a capo alla fine di ogni riga
	}
	return 0;
}
