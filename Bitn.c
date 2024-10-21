#include <stdio.h>
#include <math.h>

// Scrivere un programma bitn che prenda in input un valore intero N e un intero i e stampi a video il valore dell’i-esimo bit di N

int main() {
	
	// Dichiarazione variabili
	int x;
	int i;
	
	// Input del valore intero N
	printf("Scegli un valore intero N: ");
	scanf("%d", &x);
	
	// Input dell'intero i (viene memorizzato in x)
	printf("Scegli un intero i: ");
	scanf("%d", &i);
	
	// Spostamento dei bit e calcolo del bit in posizione i
	int y = (x >> (i - 1)) & 1;
	
	// Stampa del risultato
	printf("Il tuo i-esimo bit e\': %d", y);
	
}
