#include <stdio.h>

/*
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{ /** start of the loop */
int i;
printf("Infinite loop incoming :(\n");
i = 0;

while (i < 10)  /** start of the loop */
{ /** start of the loop */
putchar(i);  /** start of the loop */
} /** start of the loop */
printf("Infinite loop avoided! \\o/\n");
return (0);
}

