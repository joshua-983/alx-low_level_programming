#include <elf.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * cehck_elf - checks if a file is an ELF file
 * @e_ident: a pointer to an array ELF number
 * Description: file not eual to ELF file is exit 98 code
 */

void check_elf(unsigned char *e_ident)

{
	int abcd;

	for (abcd = 0; abcd < 4; abcd++)/* increment abcd*/
	
	{
	if (e_ident[abcd] != 127 &&
	e_ident[abcd] != 'E' &&
	e_ident[abcd] != 'L' &&
	e_ident[abcd] != 'F')

	/*exiting the 98 code*/        
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
	}

}

/**
 * print_class - Print ELF header.
 * @e_ident: A pointer to an array IN ELF class.
 */

void print_class(unsigned char *e_ident)

{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_magic - print magic ELF header
 * @e_ident: pointer array ELF number
 * Description: magic should be separated by spaces.
 * 
 */

void print_magic(unsigned char *e_ident)

{
	int index;

	printf("Magic number:");

	for (index = 0; index < EI_NIDENT; index++)
	{
	printf("%02x", e_ident[index]);
	if (index == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
	}
}
