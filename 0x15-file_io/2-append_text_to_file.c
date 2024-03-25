#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: name of the file
 * @text_content: the text content to append
 *
 * Return: 1 on success, -1 on fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int write_num;
	int lgt = 0;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);
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

