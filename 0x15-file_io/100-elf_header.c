#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header_info - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    
    printf("Class:   %d-bit\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);
    
    printf("Data:    %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    
    printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
    
    printf("OS/ABI:  ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV: printf("UNIX System V ABI\n"); break;
        case ELFOSABI_HPUX: printf("HP-UX ABI\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone ABI\n"); break;
        default: printf("Unknown ABI\n");
    }
    
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    
    printf("Type:    ");
    switch (header->e_type) {
        case ET_NONE: printf("NONE (No file type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("Unknown\n");
    }
    
    printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        return 98;
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || 
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}
