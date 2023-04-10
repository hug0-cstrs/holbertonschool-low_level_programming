#include "main.h"
/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	/* Si file_from n'est pas valide, il affiche un message d'erreur et quitte avec le statut 98 */
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Si file_to n'est pas valide, afficher un message d'erreur et quitter avec le statut 99 */
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - function that copies the content of a file
 * @argc: is an integer
 * @argv: pointer to char
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd_file_from, fd_file_to, n;
	char buffer[1024];

	/* Vérifier que le programme est utilisé avec les arguments attendus */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	/* Ouvrir le fichier source en lecture seule */
	fd_file_from = open(argv[1], O_RDONLY);

	/* Créer le fichier de destination avec les permissions adéquates */
	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* Vérifier si des erreurs se sont produites en faisant appelle a la fonction error_file */
	error_file(fd_file_from, fd_file_to, argv);

	/* Copier le contenu du fichier source vers le fichier destination */
	while ((n = read(fd_file_from, buffer, 1024)) > 0)
	{
		/* Vérifie si l'écriture dans file_to échoue */
		if ((write(fd_file_to, buffer, n)) != n || fd_file_to < 0)
		{
			/* Si l'écriture échoue, appelle de la fonction error_file qui gère les erreurs */
			error_file(0, -1, argv);
		}
	}

	/* Vérifier si une erreur de lecture s'est produite */
	if (n < 0)
	{
		error_file(-1, 0, argv);
	}

	/* Fermer fd_file_from et vérifier les erreurs */
	if (close(fd_file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}

	/* Fermer fd_file_to et vérifier les erreurs */
	if (close(fd_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
		exit(100);
	}

	/* Sortie avec succès */
	return (0);
}
