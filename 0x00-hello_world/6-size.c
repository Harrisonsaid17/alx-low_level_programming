#include <stdio.h>
/**
 * main - Program that prints the size of various types
 * Return: 0 (Done)
 */
int main(void)
{
       char e;
       int f;
       long int g;
       long long int h;
       float j;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("size of a int: %lu byte (s)\n", (unsigned long)sizeof(f));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
return (0);
}
~                                                       
