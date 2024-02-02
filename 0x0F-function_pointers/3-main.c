#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}