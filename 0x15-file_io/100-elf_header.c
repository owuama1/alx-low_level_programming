#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>
/**
*error_message - print error message
*@msg: message
*Return: nothing
*/
void error_message(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
*print_elf_header_info - print elf header info
*@header: a pointer
*Return: nothing
*/

void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x "
		"%02x %02x %02x %02x %02x\n",
		header->e_ident[EI_MAG0], header->e_ident[EI_MAG1], header->e_ident[EI_MAG2],
		header->e_ident[EI_MAG3],
		header->e_ident[EI_CLASS], header->e_ident[EI_DATA],
		header->e_ident[EI_VERSION],
		header->e_ident[EI_OSABI], header->e_ident[EI_ABIVERSION],
		header->e_ident[EI_PAD], header->e_ident[EI_PAD + 1],
		header->e_ident[EI_PAD + 2],
		header->e_ident[EI_PAD + 3], header->e_ident[EI_PAD + 4],
		header->e_ident[EI_PAD + 5],
		header->e_ident[EI_PAD + 6]);
	printf("  Class:                             %s\n",
		header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : (header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Unknown"));

	printf("  Data:                              %s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" :
		(header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big-endian" : "Unknown"));

	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
		header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
		(header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
		(header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
		(header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
		(header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
		(header->e_ident[EI_OSABI] == ELFOSABI_IRIX ? "UNIX - IRIX" :
		(header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "UNIX - FreeBSD" :
		(header->e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "UNIX - TRU64" :
		(header->e_ident[EI_OSABI] == ELFOSABI_ARM ? "ARM" :
		"UNIX - Unknown")))))))));
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
		header->e_type == ET_REL ? "REL (Relocatable file)" :
		(header->e_type == ET_EXEC ? "EXEC (Executable file)" :
		(header->e_type == ET_DYN ? "DYN (Shared object file)" :
		(header->e_type == ET_CORE ? "CORE (Core file)" :
		"Unknown"))));
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}
/**
*main - displays the info contained in the ELF header at the start of an ELF file.
*@argc: argument count
*@argv: argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);
	Elf64_Ehdr header;

	if (argc != 2)
		error_message("Usage: elf_header elf_filename");
	if (fd == -1)
		error_message(strerror(errno));

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_message("Can't read header");

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		error_message("Not an ELF file");

	print_elf_header_info(&header);

	close(fd);

	return (0);
}
