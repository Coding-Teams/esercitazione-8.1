/*
 * funzioni.h
 *
 *  Created on: 26 apr 2021
 *      Author: Piersilvio Spicoli
 */

#ifndef SRC_FUNZIONI_H_
#define SRC_FUNZIONI_H_

#define max_stringa 10
#define max_p 5
#define tempo_minimo 80000
#define tempo_massimo 90000

/*
 * menu:
 * visualizzazione delle scelte
 */
void menu();
/*
 * generazione_dati:
 * diamo la possibilità di generare piu volte
 * i tempi di giro
 */
void generazione_dati();
/*
 * gen_tempo:
 * funzione che restituisce il
 * tempo in millisecondi
 */
int gen_tempo();
/*
 * classifica:
 * visualizziamo i dati dopo aver
 * richiamato la funzione di conversione dei tempi
 * in millisecondi e dopo aver ordinato i record
 */
void classifica();
/*
 * sorting:
 * implementazione del algoritmo selection sort.
 * è utile utilizzare questo tipo di algoritmo, qualora il numero
 * di piloti da ordinare è appunto di 5, con alg. bubble sort, non avremmo
 * potuto ordinare il quinto pilota, lasciando invariato la sua posizione
 * in classifica
 */
void sorting();
/*
 * swapp:
 * procedura che per 'swappare' negli indirizzi di memoria
 * i valori contenuti
 */
void swapp(int*, int*);
/*
 * convert:
 * procedura di conversione dei millisec. in tempo
 * ben leggibile
 */
void convert(int*, int*, int*, int*);

#endif /* SRC_FUNZIONI_H_ */
