#include <iostream>
#include <fstream>	//ofstream
#include <cstdlib>	//exit()
using namespace std;

int main(){
	fstream stream; //dichiaro lo stream senza definire se out o in (fstream)
	stream.open("dati.txt", std::fstream::in); //apro il canale specificando che e' un canale di input
	if(stream.fail()){ //controllo che l'apertura sia andata a buon fine
		cerr << "Apertura del canale di output fallita!" << endl;
		exit(1); //se e' fallita esco dal programma
	}
	//leggo da file e faccio qualcosa
	//...
	stream.close();
	stream.open("dati.txt", std::fstream::out | std::fstream::app); //apro uno stream in out che non sovrascrive il file dati.txt ma scrive in fondo, le diverse opzioni si concatenano con ``|''
	if(stream.fail()){ //controllo che l'apertura sia andata a buon fine
		cerr << "Apertura del canale di output fallita!" << endl;
		exit(1); //se e' fallita esco dal programma
	}
	//scrivo qualcosa sul file
	//...
	stream.close();	
	return 0;
}
