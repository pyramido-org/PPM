#ifndef DEBUG_H
#define DEBUG_H

#include "compiler_Ex.h"
#include <errno.h>
#include <stdint.h>

void debug_init(void);
void _debug_bug(const char *function, const char *fmt, ...) PPM_FORMAT(2, 3) PPM_NORETURN;
void _debug_print(const char *function, const char *fmt, ...) PPM_FORMAT(2, 3);
#define d_print(...) _debug_print(__FUNCTION__, __VA_ARGS__)

uint64_t timer_get(void);
void timer_print(const char *what, uint64_t usec);

#define BUG(...) _debug_bug(__FUNCTION__, __VA_ARGS__)

#define PPM_STR(a) #a

#define BUG_ON(a)			\
do {					\
	if (unlikely(a))		\
		BUG("%s\n", PPM_STR(a));	\
} while (0)


#endif
