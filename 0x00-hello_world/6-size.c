#include<stdio.h>
/**
 * main - A programme that prints the size of various computer types
 * Return 0 (success)
 */
int main(void)
	Return 0 (success)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f; 
printf("size of char %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int %lu byte(s)\n", (unsigned long long)sizeof(d));
printf("size of a float %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
