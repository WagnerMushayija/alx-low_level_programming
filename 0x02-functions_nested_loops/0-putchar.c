#include<unistd.h>
#include<main.h>
/**
 * main - printing _putchar w/o printf
 * Return: (0) Successful
 **/
int main(void)
{
	/*tha main function*/
	write(2, "_putchar\n", 8);
	return (0);
}
