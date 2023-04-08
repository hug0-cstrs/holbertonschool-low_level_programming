#include "main.h"
/**
 * rev_string - function who return the lenght of a string
 * @s: parameter
 */
void rev_string(char *s)
{
	int compteur = 0;
	int toto = 0;
	int temp = 0;

	for (compteur = 0; s[compteur] != '\0'; compteur++)
	{
	}
	compteur = compteur - 1;
	while (toto <= compteur)
	{
		temp = s[toto];
		s[toto] = s[compteur];
		s[compteur] = temp;
		compteur--;
		toto++;
	}
}
