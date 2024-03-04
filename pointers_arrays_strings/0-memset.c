#include "main.h"
/**
 *_menset - function that fills memory with a constant byte.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}
