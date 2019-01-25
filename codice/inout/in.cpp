#include <iostream>
#include <fstream>	//ifstream
#include <cstdlib>	//exit()
using namespace std;

int main(){
	int vec[10];
	ifstream in; //dichiaro lo stream in
	in.open("dati.dat"); //apro il canale verso il file dati.dat
	if(in.fail()){ //controllo che l'apertura sia andata a buon fine
		cerr << "Apertura del canale di input fallita!" << endl;
		exit(1); //se e' fallita esco dal programma
	}
	
	for(int i=0; i<10; ++i)
		in>>vec[i]; //uso in come userei cin
	in.close(); //chiudo il canale
	return 0;
}
