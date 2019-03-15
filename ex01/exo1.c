#include <stdio.h>
#include <string.h>

/*
 * EXO 01: Réussir à trouver l'input sans patcher le binaire
 * But: Utiliser le décompilateur de Ghidra et voir rapidement ce qu'est little endian
 */

int main(int argc, char **argv)
{
	char buff[] = "I am Groot";
	if (argc != 2)
		return -1;
	int len = strlen(argv[1]);
	for (int i = 0; i < len; i += 1)
		if (buff[i] != argv[1][i]) {
			printf("Definitively not\n");
			return -1;
		}
	printf("You did it ! Congratz ++\n");
	return 0;
}
