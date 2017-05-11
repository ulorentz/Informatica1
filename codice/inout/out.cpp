#include <iostream>
#include <fstream>	//ofstream
#include <cstdlib>	//exit()
using namespace std;

int main(){
	int vec[10];
	//Riempio vec in qualche modo...
	//...
	
	ofstream out; //dichiaro lo stream out
	out.open("dati.txt"); //apro il canale verso il file dati.txt (che crea, non esistendo)
	if(out.fail()){ //controllo che l'apertura sia andata a buon fine
		cerr << "Apertura del canale di output fallita!" << endl;
		exit(1); //se e' fallita esco dal programma
	}
	
	for(int i=0; i<10; ++i)
		out << vec[i] << endl; //nota uso out e non cout!! out e' il canale verso il file!
	out.close(); //chiudo il canale
	return 0;
}
