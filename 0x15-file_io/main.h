#ifndef MAIN_H
#define MAIN_H

int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
void close_fd(int fd);
void cpy(int src, int dest, char *src_name, char *dest_name);

#endif
