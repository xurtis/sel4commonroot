/*
 * Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <autoconf.h>
#include <sel4/sel4.h>

char *strcpy(char *dest, const char *src)
{
	int i = 0;
	while (src[i]) {
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return dest;
}

void simple_print(char *s)
{
#ifdef CONFIG_DEBUG_BUILD
	while (*s) {
		seL4_DebugPutChar(*s);
		s++;
	}
#endif
}

int main(void)
{
	simple_print("Hello, world!\n");

	return 0;
}
