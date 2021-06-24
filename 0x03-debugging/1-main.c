#include <stdio.h>

/**
* main - causes an infinite loop
* print - infinite loop avoided! \\o/\n
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/**
* while (i < 10)
* main - causes an infinite loop avoided
* {
*	putchar(i);
* }
* print - infinite loop avoided! \\o/\n
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
