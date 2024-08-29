#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

void print_elf_header(const Elf64_Ehdr *header)
{
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x%s", header->e_ident[i], (i == EI_NIDENT - 1) ? "\n" : " ");

printf("  Class:                             ");
switch (header->e_ident[EI_CLASS]) {
case ELFCLASS32: printf("ELF32\n"); break;
case ELFCLASS64: printf("ELF64\n"); break;
default: printf("<unknown: %x>\n", header->e_ident[EI_CLASS]); break;
}

printf("  Data:                              ");
switch (header->e_ident[EI_DATA]) {
case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
default: printf("<unknown: %x>\n", header->e_ident[EI_DATA]); break;
}

printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI]) {
case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
case ELFOSABI_HPUX: printf("HP-UX\n"); break;
case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
case ELFOSABI_LINUX: printf("Linux\n"); break;
case ELFOSABI_SOLARIS: printf("Solaris\n"); break;
case ELFOSABI_AIX: printf("AIX\n"); break;
case ELFOSABI_IRIX: printf("IRIX\n"); break;
case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
case ELFOSABI_TRU64: printf("TRU64 UNIX\n"); break;
case ELFOSABI_MODESTO: printf("Modesto\n"); break;
case ELFOSABI_OPENBSD: printf("OpenBSD\n"); break;
case ELFOSABI_ARM: printf("ARM\n"); break;
case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
default: printf("<unknown: %x>\n", header->e_ident[EI_OSABI]); break;
}

printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (header->e_type) {
case ET_NONE: printf("NONE (None)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_CORE: printf("CORE (Core file)\n"); break;
default: printf("<unknown: %x>\n", header->e_type); break;
}

printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
ssize_t bytes_read;

if (argc != 2)
print_error("Usage: elf_header elf_filename", 97);

fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error("Error: Can't read from file", 98);

bytes_read = read(fd, &header, sizeof(header));
if (bytes_read == -1 || bytes_read != sizeof(header))
print_error("Error: Can't read ELF header", 98);

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
print_error("Error: Not an ELF file", 98);

print_elf_header(&header);

if (close(fd) == -1)
print_error("Error: Can't close file descriptor", 100);

return 0;
}
