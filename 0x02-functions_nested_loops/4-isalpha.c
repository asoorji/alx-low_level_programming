#include "main.h"
/**
 * _isalpha - checks if the character is an alphabet
 * @c : character to verify
 * Return:0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
