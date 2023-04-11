/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

/* This function generates a hash value using the djb2 algorithm for a given string input */
unsigned long int hash_djb2(const unsigned char *str)
{
	/* Initialize hash to a number */
	unsigned long int hash = 5381;
	/* Declare a variable to hold the current character being processed */
	int c;

	/* Loop through the string until the null terminator is reached */
	while ((c = *str++))
	{
		/* Generate the hash value using the djb2 algorithm */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	/* Return the hash value */
	return (hash);
}
