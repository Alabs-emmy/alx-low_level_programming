#ifndef _MAIN_H
#define _MAIN_H

/*
 * Description: Header file that contain prototype of all
 *		the funtions used in the directory 0x15-file_io
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* _MAIN_H */
