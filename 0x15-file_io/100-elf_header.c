#include "main.h"
#define BUF_SIZE 64
/**
 * print_error - Print an error message, exit with status code 98
 * @msg: Message to be printed
 *
 * Return: Status code 98
 */
void print_error(const char *msg)
{
	write(STDERR_FILENO, msg, strlen(msg));
	exit(98);
}
/**
 * print_elf_header_info - Print ELF header information
 * @header: pointer to the ELF header structure
 */

void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Unknown");
	printf("  Data:                              %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
			header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               %#lx\n",
			(unsigned long)header->e_entry);
}

/**
 * main - Read ELF header and display information
 * @argc: count of inputted arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename\n");
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		print_error("Error opening file\n");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error reading ELF header\n");

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Not an ELF file\n");
	print_elf_header_info(&header);

	close(fd);
	return (0);
}
