#include "funzioni.h" //devo includere l'header delle funzioni, il file ".h" della libreria, con le definizioni di funzioni

void CaricaDaFile(const char* nomefile, Poligono* &poligoni, unsigned int& npoligoni){
	ifstream in; //canale per lettura su file

	in.open(nomefile);
	if(in.fail()){
		cout << "Errore apertura file ''"<< nomefile << "''. Chiudo il programma." << endl;
		exit(1);
	}



	//ho aperto il file, ora mi occupo di caricare i dati, ma prima devo contarli!

	unsigned int nvertici=0; //per contare i vertici in lettura
	PuntoR2 appo; //variabile di appoggio per contare i dati
	npoligoni=0; //inizializzo a zero il numero di poligoni

	in >> nvertici;
	while(nvertici!=0 and !in.eof()){ //per leggere nvertici non deve essere zero e non devo essere alla fine del file
		for(unsigned int i=0; i<nvertici; ++i){
			in >> appo.x;
			in >> appo.y;
		}
		npoligoni++; //ho letto quanti vertici ha un poligono
		in >>nvertici; //leggo quanti vertici ha il successivo, se e' diverso da zero il ciclo continua.
	}


	//ho contato il numero di poligoni, posso creare il vettore di poligoni:
	poligoni=new Poligono[npoligoni];

	//ora posso caricare i dati, porto la testina del file al punto iniziale
	in.clear();
	in.seekg(0);
	
	for(unsigned int i=0; i<npoligoni; ++i){
		in >> nvertici;
		poligoni[i].vertici=new PuntoR2[nvertici]; //alloco il vettore di vertici di ogni poligono, dovro' ricordarmi ad un certo punto di fare un bel delete...
		poligoni[i].nvertici=nvertici;
		for(unsigned int j=0; j<nvertici; ++j){
			in >> (poligoni[i]).vertici[j].x;
			in >> (poligoni[i]).vertici[j].y;
		}
	}
	in.close();//ho finito di caricare i dati, devo ricordarmi di chiudere il file!
} 


bool Intrecciato(Poligono poligono){

	float a1, a2, c1, c2;//per il calcolo delle rette
	float x_intersezione;
	for(unsigned int i=0; i<poligono.nvertici-1; ++i){
		a1=(poligono.vertici[i].y-poligono.vertici[i+1].y)/(poligono.vertici[i].x-poligono.vertici[i+1].x); //coef. angolare prima retta
		c1=poligono.vertici[i].y-poligono.vertici[i].x*a1; //costante prima retta
		for(unsigned int j=i+2; j<poligono.nvertici-1; ++j){ //j=i+2: non considero il lato immediatamente successivo
			a2=(poligono.vertici[j].y-poligono.vertici[j+1].y)/(poligono.vertici[j].x-poligono.vertici[j+1].x); //coef.angolare seconda retta
			c2=poligono.vertici[j].y-poligono.vertici[j].x*a2; //costante seconda retta
			if(a1==a2)
				continue; //le rette sono parallele, di sicuro nessuna intersezione
			x_intersezione=(c2-c1)/(a1-a2); //interseco le due rette e trovo l'ascissa di intersezione
			if((x_intersezione>poligono.vertici[i].x and x_intersezione<poligono.vertici[j].x) or (x_intersezione<poligono.vertici[i].x and x_intersezione>poligono.vertici[j].x)) //non so quale tra le due x e' la maggiore e minore, quindi testo entrambe le possibilia'
				return true;
		}
	}
	return false; //non ho trovato nessuna intersezione
}


void GetPunti(Poligono* poligoni, unsigned int npoligoni, PuntoR2* &punti, unsigned int &npunti){
	npunti=0;
	for(unsigned int i=0; i<npoligoni; ++i)
		npunti+=poligoni[i].nvertici; //conto i punti totali
	
	punti= new PuntoR2[npunti]; //di nuovo: quando non mi servira' piu' andra' fatto un bel delete!
	unsigned int counter=0; //contatore
	for(unsigned int i=0; i<npoligoni; ++i){
		for(unsigned j=0; j<poligoni[i].nvertici; ++j){
			punti[counter]=poligoni[i].vertici[j];
			counter++;
		}

	}

}


void SelsortCrescente(PuntoR2 v[], unsigned int dim){ 
	unsigned int posMin;
	PuntoR2 min;
	PuntoR2 appo;
	for (unsigned int j=0;  j<dim-1; ++j) {
		min = v[j];
		posMin=j;
		for (unsigned int i=j+1; i<dim; ++i){
			if (v[i].x < min.x) {
				posMin=i;
				min=v[i];
			}
		}
		appo=v[j];
		v[j]=v[posMin];
		v[posMin]=appo;	
	}
}

 
