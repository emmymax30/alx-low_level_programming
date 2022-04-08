#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)

{
char alphabt;

for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
{
if (alphabt == 'q')
continue;

else if (alphabt == 'e')
continue;

putchar(alphabt);
}

putchar('\n');

return (0);

}
