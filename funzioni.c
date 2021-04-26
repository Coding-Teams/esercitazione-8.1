/*
 * funzioni.c
 *
 *  Created on: 26 apr 2021
 *      Author: Piersilvio Spicoli
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funzioni.h"

//nuovo tipo di dato
typedef struct{

	int t_min;
	int t_sec;
	int t_dec;
	int t;

}piloti;

piloti p[max_stringa];

//var. gloabli
int i = 0;
int j = 0, cogn = 0;

void menu()
{
	//var. locali
	int ch = 0;

	do{
			puts("\tandamento piloti F1 2020\n");
			puts("\t1 - generazione dati da analizzare\n");
			puts("\t2 - visualizza classifca in ordine di tempo\n");
			puts("\tscelta (0 per uscire)_> ");
			scanf("%d", &ch);

			switch(ch)
			{
				case 1:
					generazione_dati();
				break;
				case 2:
					classifica();
				break;
			}

	}while(ch != 0);
}

void generazione_dati()
{
	for(i = 0; i < max_p; i++)
	{ p[i].t = gen_tempo(); }
	puts("\tdati generati!\n");
}

void sorting()
{
	//var. locali
	int min = 0;
	piloti tmp;

	for(i = 0; i < max_p; i++)
	{
		  min = i;
		  for(j=i+1; j<max_p; j++)
		  {
			  if(p[j].t < p[min].t)
			  {
					  min = j;
			  }
		  }
		  tmp = p[min];
		  p[min] = p[i];
		  p[i] = tmp;
	 }
}

void classifica()
{
	//bubble sorting - ordinamento in base ai millisecondi
	for(i = 0; i < max_p; i++)
	{ convert(&p[i].t_min, &p[i].t_sec, &p[i].t_dec, &p[i].t); }

	sorting();

	puts("\tclassifica dei piloti\n");
	for(i = 0; i < max_p; i++)
	{
		printf("\t\tpilota n^%d: \n", i + 1);
		printf("\t\tprimo tempo: %d' %d'' %d\n", p[i].t_min, p[i].t_sec, p[i].t_dec);
		printf("\t\tmillesimi: %d\n", p[i].t);
		puts("\n");
	}
}


void convert(int* a/*min*/, int* b /*sec*/, int* c/*dec*/, int* d/*millisec.*/)
{
	*b = *d / 1000; //conversione dei secondi
	*c = *d - (*b * 1000); //conv. decimi
	*a = *b / 60; //conv. minuti
	*b = *b - (*a * 60);
}

int gen_tempo()
{ return rand()%(tempo_massimo - tempo_minimo + 1) + tempo_minimo; }



