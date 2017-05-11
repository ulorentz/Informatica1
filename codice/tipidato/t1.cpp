#include <iostream>
using namespace std;

int main(){
	int a=0;
	cout << "Benvenuto in questo programma!" << endl; //sto stampando una stringa: lettere racchiuse tra virgolette. Endl manda a capo
	cout << "Inserisci un numero intero: "; //non vado a capo
	cin >> a; //cin aspetta che tu inserisca un numero da tastiera. Non andando a capo aspetta sulla stessa riga. Premendo invio andra' a capo

	cout << "Hai inserito: " << a << endl;

	cout << "Alcuni caratteri speciali:\tbackslash t e' uno spazio di tab\nbackslash n manda a capo" << endl;
	cout << "Per stampare piu' variabili e stringhe separali con <<:" << endl;
	cout << 1 << "\t" << 2 << "\t" << 3 << "\n";
	return 0;
}
