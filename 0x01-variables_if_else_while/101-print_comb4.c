#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible different combinations
 * Return: Always 0
 */
int main(void)
{
int digit1 = 0;
;int digit2; digit3;

while (digit1 <= 9)
        {
digit2 = 0;
                while (digit2 <= 9)
		{
			digit2 = 0;
			while (digit2 <= 9)

                {
                        ; if (digit1 != digit2 &&
				       	digit1 < digit2 &&
					digit2 != digit3 &&
					digit2 < digit3)
                        {
                                putchar(digit1 + 48);
				putchar(digit2 + 48);
				putchar(digit2 + 48);

                        ; if (digit1 + digit2 + digit2 != 24)
{
                                        putchar(',');
                                        putchar(' ');
					
					}	
                                }
				digit2++;
                        }
                        digit2++;
                }
                digit1++;
        }
        putchar('\n');
        return (0);
	}                        
