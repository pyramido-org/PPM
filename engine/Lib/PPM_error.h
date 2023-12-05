#ifndef PPM_ERROR_H
#define PPM_ERROR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <compiler_Ex.h>
#include <errno.h>

extern char *program_name;

struct option {
	/* short option or 0 */
	int short_opt;

	/* long option or NULL */
	const char *long_opt;

	/* does option have an argument */
	int has_arg;
};
void malloc_fail(void);

void warn(const char *format, ...) PPM_FORMAT(1, 2);
void warn_errno(const char *format, ...) PPM_FORMAT(1, 2);
void die(const char *format, ...) PPM_FORMAT(1, 2) PPM_NORETURN;
void die_errno(const char *format, ...) PPM_FORMAT(1, 2) PPM_NORETURN;


#endif  //PPM_ERROR_H