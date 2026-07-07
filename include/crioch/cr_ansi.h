// cr_ansi.h
// macro defs for ansi escape sequences

#ifndef CR_ANSI_H
#define CR_ANSI_H

#define CR_ANSI_CURSOR_UP(n) printf("\033[%dA", n)
#define CR_ANSI_CURSOR_DOWN(n) printf("\033[%dB", n)
#define CR_ANSI_CURSOR_RIGHT(n) printf("\033[%dC", n)
#define CR_ANSI_CURSOR_LEFT(n) printf("\033[%dD", n)

#define CR_ANSI_CURSOR_TO(r, c) printf("\033[%d;%dH", r, c)

#endif
