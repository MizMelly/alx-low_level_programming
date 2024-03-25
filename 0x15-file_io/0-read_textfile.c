#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT
 * @filename: text file being read
 * @letters: number of letter to be read
 * Return: w- actual number of byte read and printed
 *   0 when function fails or filename NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fdi, ti, wi;

	fdi = open(filename, O_RDONLY);
	if (fdi == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	ti = read(fdi, buff, letters);
	wi = write(STDOUT_FILENO, buff, ti);

	free(buff);
	close(fdi);
	return (wi);
}
