/*
 * main.c
 *
 *  Created on: 26 apr 2021
 *      Author: Piersilvio Spicoli
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funzioni.h"

int main()
{
	srand(time(0));
	setbuf(stdout, 0);

	menu();

	return 0;
}
