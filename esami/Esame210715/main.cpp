#include "funzioni.h" 	//importo la libreria, essendo un file locale uso le virgolette
#include <iostream> 	//cout, endl, ecc...
#include <fstream> 	//scrittura su file

//Librerie di ROOT
#include "TH1F.h" 	//histogramma monodimensionale
#include "TApplication.h" //per far partire la "app" di root
#include "TCanvas.h" 	//per poter usare le canvas, le tele su cui disegnare


using namespace std; //per evitare di dover anteporre "std::" a tutte le funzioni facenti parte del namespace std; e' un argomento probabilmente non toccato nel corso di calcolo 1, non dimenticarti questa linea pero' se non sai come fare altrimenti!

int main(){
	Poligono* poligoni; //vettore dinamico di poligoni
	unsigned int npoligoni=0; //numero di poligoni che carichero'
	ofstream out; //dichiaro un canale di uscita per un file su cui scrivere tutti i risultati
	out.open("risultati.dat");
	if(out.fail()){ //controllare che lo stream non sia rotto e' indice di buono stile di programmazione, magari non ti sembrera' fondamentale ma fidati: all'esame sara' apprezzato!
		cout << "Errore apertura file ''risultati.dat'', interrompo il programma." << endl;
		return 1;
	}


	CaricaDaFile("poligoni.dat", poligoni, npoligoni); //carico i dati da file, vedi funzioni.h e .cpp


	cout << "Numero di poligoni " << npoligoni << endl;
	out << "Numero di poligoni " << npoligoni << endl;
	for(unsigned int i=0; i<npoligoni; ++i){ //ciclo tutti i poligono
		if(Intrecciato(poligoni[i])){ //e controllo per ogni poligono se e' intrecciato
			cout << "Il poligono n'"<< i+1<< " e' intrecciato."<< endl;
			out << "Il poligono n'"<< i+1<< " e' intrecciato."<< endl;
		}
	}

	//Per la seconda parte del programma prima di tutto creo un vettore contenente tutti i punti (dovendo ora lavorare solo su quelli), quindi  ordino per x crescenti per semplificarmi la vita
	unsigned int npunti=0;
	PuntoR2* punti;	
	GetPunti(poligoni,npoligoni, punti, npunti);


	//la memoria allocata dal vettore di poligoni non mi serve piu' nella seconda parte del programma, la libero!
	for(unsigned int i=0; i<npoligoni; ++i)
		delete[] poligoni[i].vertici;
	delete[] poligoni;


	SelsortCrescente(punti, npunti);
	cout << "Ascissa minore: x = " << punti[0].x<< endl; //avendo ordinato per x crescenti e' il primo del vettore
	out << "Ascissa minore: x = " << punti[0].x << endl;
	cout << "Ascissa massima: x = " << punti[npunti-1].x<< endl; //e' l'ultimo del vettore
	out << "Ascissa massima: x = " << punti[npunti-1].x<< endl;	

	out.close(); //di nuovo: chiudere i canali per file e' indice di buono stile di programmazione, non dimenticarlo!

	

	TApplication app("", 0, 0); //dichiara l'applicazione di root
	TCanvas tela("Istogramma", "Strisce verticali"); //dichiara una tela
	TH1F histo("", "", 10, punti[0].x-0.5, punti[npunti-1].x+0.5); //dichiara un istogramma contenente 10 bin, punto minimo "punti[0].x-0.5", punto massimo "punti[npunti-1].x+0.5"
	for(unsigned int i=0; i<npunti; ++i)
		histo.Fill(punti[i].x); //riempio l'istrogramma con tutti i punti

	delete[]punti; 	//non mi serve piu', libero la memoria


	tela.cd();	//seleziono la tela su cui disegnare
	histo.Draw(); 	//disegno l'istogramma
	app.Run(); 	//faccio partire root
	
	return 0;
}
