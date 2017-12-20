#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void printerror(int x, char *argv);
void closeerror(int x, int fd_val);

#endif
