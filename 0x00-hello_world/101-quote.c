#include<stdio.h>
#include<unistd.h>
/**
 * main - program
 * Return: 1 required
 **/
int main(void)
{
	/*using unistd.h for write*/
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
