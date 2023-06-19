#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */

int main(void)

{	

	printf("Size of a char: %Zu byte(s)\n", sizeof(char));

	printf(" an int: %Zu byte(s)\n", sizeof(int));
	printf("long int: %Zu byte(s)\n", sizeof(long int));
	printf("long long int: %Zu  byte(s)\n", sizeof(long long int));
	printf("foat: %Zu byte(s)\n", sizeof(float));

	return (0);

}	
