#ifndef FUNZIONI_H 
#define FUNZIONI_H
#include <fstream> 	//lettura e scrittura su file
#include <iostream> 	//cout, endl...
#include <cstdlib> 	//exit() 


using namespace std;


struct PuntoR2{ //definisco una struttura per il tipo di dato utile per rappresentare un punto in r2
	float x;
	float y;
};

struct Poligono{ //struttura per rappresentare un poligono
	PuntoR2* vertici; //puntatore a PuntoR2 per creare dinamicamente un vettore di punti
	unsigned int nvertici; //per tenere a memoria il numero di vertici
};

void CaricaDaFile(const char* nomefile, Poligono* &poligoni, unsigned int& npoligoni); //funzione per caricare i dati da file: come argomento vuole il nome del file, un puntatore a struct Poligono passato per referenza per crare dinamicamente un vettore di poligoni, e un intero in cui salvare il numero di poligoni caricati

bool Intrecciato(Poligono poligono); // funzione che trova se un poligono e' intrecciato, se si restituisce true, altrimenti false.

void GetPunti(Poligono* poligoni,unsigned int npoligoni, PuntoR2* &punti, unsigned int &npunti); //funzione per creare un vettore di punti contenente tutti i punti dei poligoni, in ingresso il vettore in poligoni, la sua dimensione e, passati per referenza, un puntatore a PuntoR2 con cui creare dinamicamente il vettore e la sua futura dimensione



//Probabilmente hai gia' scritto nel corso un algoritmo di ordinamento, per esempio il selsort, devo pero' adattarlo (se non ho usato template) al tipo di dato su cui vado ad operare (PuntoR2 nel nostro caso) -ad esempio, cosa vuol dire ">" per il nostro tipo di dato?...- , per come l'ho implementato io ordina per x crescenti!
void SelsortCrescente(PuntoR2 v[], unsigned int dim); //in ingresso un vettore e la sua dimensione


#endif /* FUNZIONI_H */
