#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
int i, x = 1, y = 2, sum = 0;
for (i = 0; i < 50; i++)
{
printf("%d, ", x);
sum = x + y;
x = y;
y = sum;
}
printf("\n");
return (0);
}
