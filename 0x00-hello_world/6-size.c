#include <stdio.h>

/**
 * main - to print the size of data types
 *
 * Return: always (0)
 */
int main(void)
{
    char a;
    int b;
    long int c;
    long long int d;
    float e;
    printf("Size of a char: %lu bytes(s)", sizeof(a));
    printf("Size of an int: %lu bytes(s)", sizeof(b));
    printf("Size of a long int: %lu bytes(s)", sizeof(c));
    printf("Size of a long long int: %lu bytes(s)", sizeof(d));
    printf("Size of a float: %lu bytes(s)", sizeof(e));

    return (0);
}
