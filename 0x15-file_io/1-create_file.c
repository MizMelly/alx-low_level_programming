#include "main.h"

/**
 * create_file -create a file with specified content
 * @filename: file name to be created
 * @text_content: text content to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	int write_num;
	int lgt = 0;

	if (filename  == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lgt])
			lgt++;
		write_num = write(file_des, text_content, lgt);
		if (write_num != lgt)
		{
			close(file_des);
			return (-1);
		}
	}

	close(file_des);
	return (1);
}
