#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>
#include <elf.h>

/* Functions */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void print_error(const char *msg);
void print_elf_header_info(const Elf64_Ehdr *header);


#endif /* MAIN_H */
