#include "main.h"
/**
 * _isalpha- to check lower case and uppercase
 * @c : the character to be checked
 * Return: 1 for lower case or 0 for uppercase
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
