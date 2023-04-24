#include <stdio.h>
/**
*main - Entry point
*Return: 0 (success)
*/
int main(void)
{
printf("size of a char: %1d byte(s)\n", sizeof(char));
printf("size of an int: %4d byte(s)\n", sizeof(int));
printf("size of a long int: %4d byte(s)\n", sizeof(long int));
printf("size of a long long int: %8d byte(s)\n", sizeof(long long int));
printf("size of a float: %4d byte(s)\n", sizeof(float));
return (0);
}


