#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned char *e_ident);
void print_entry(unsigned char *e_ident);
void close_elf(int elf);

/**
*check_elf - this checks if a file is an ELF file
*@e_ident: a pointer to an array containg the ELF magic numbers
*
*Description: if the file is not an ELF file - exit code 98
*/
void check_elf(unsigned char *e_ident)
{
int index;
for (index = 0; index < 4; index++)
{
if (e_ident[index] != 127 &&
e_ident[index] != 'E' &&
e_ident[index] != 'L' &&
e_ident[index] != 'F' )
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic -prints the magic numbers of an ELF header
* @e_ident: a pointer to an array the ELF magic numbers
 *
 * Description: Magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
        int index;
        printf(" Magic:    ");

        for (index = 0; index < EI_NIDENT; index++)
        {
                printf("%02x", e_ident[index]);

                if (index == EI_NIDENT -1)
                        printf("\n");

                else
                        printf("  ");
        }
}

/**
 * print_class - prints the class of an ELF header
 * @e_ident: a pointer to an array containing the elf class
 */
void print_class(unsigned char *e_ident)
{
        printf(" class:                           ");

        switch (e_ident[EI_class])
        {
                case ELFCLASSNONE:
                        printf("none\n");
                        break;
                case ELFCLASS32:
                        printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: @x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an ELF header
 * @e_ident: qa pointer to an array containing the ELF class
 */
void print_data (unsigned char *e_ident)
{
	printf(" Data:                           ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: @x>\n", e_ident[EI_CLASS]);
	}
}
