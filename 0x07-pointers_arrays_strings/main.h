#ifndef MAIN_H
#define MAIN_H

/**
 * memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to be filled 
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
#endif /* MAIN_H */ 