#come e' costituito ogni comando di un makefile?
# nomecomando: oggetti necessari al comando
#	comando (preceduto da spazio di tab, obbligatorio!)


 #questa riga e la prossima sono dei comandi di root per dire al compilatore che flag usare in compilazione
INCS=`root-config --cflags`
LIBS=`root-config --libs`

#esempio: compila ha bisogno dei file oggetto "main.o" e "funzioni.o"
compila: main.o funzioni.o
	g++ main.o funzioni.o -o main ${INCS} ${LIBS} #quando faccio il linking, ovvero creo l'eseguibile finale, devono esserci entrambi i comandi di root, vengono chiamati con dollaro e dentro le parentesi graffe il nome delle variabili (quello che precede l'uguale alle righe sopra)

#main.o ha bisogno dei file di codice "main.cpp" e "funzioni.h" (che e' incluso in main.cpp)
main.o: main.cpp funzioni.h
	g++ main.cpp -c ${INCS} #nella compilazione parziale dei file che includono le librerie di root ci vuole il comando flags (che noi abbiamo assegnato ad INCS)
funzioni.o: funzioni.cpp funzioni.h
	g++ funzioni.cpp -c
esegui:	main
	./main
