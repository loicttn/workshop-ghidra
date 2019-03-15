#include <stdio.h>
#include <stdlib.h>
/*
 * EXO2 : 
 * But: comprendre ASM via décompilation en C + importer un binaire + le patcher
 * Solution: Dans Ghidra, importer le binaire en RAW BINARY language: x86 little endian intel
 * trouver la fonction main
 * patch la condition ou l'assignation à la variable a
 * exporter au format binaire le programme
 */

int main(int argc, char **av)
{
	if (argc != 2) {
		printf("Not this way...\n");
		return -1;
	}
	int a = atoi(av[1]);

	if (a > 0)
		a = 4;
	if (a == 844884)
		printf("ARE U HACKER ?\n");
	else
		printf("JUST DO IT\n");
	return 0;
}
