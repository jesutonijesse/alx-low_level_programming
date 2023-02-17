#include <stdio.h>

/**
*main -The program prints size of various types of computer
*Return: Always 0 (Success)
*/

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float f: %lu byte(s)\n", sizeof(float));
return (0);
}
