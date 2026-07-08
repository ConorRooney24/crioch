// cr_ansi.h
// macro defs for ansi escape sequences

#ifndef CR_ANSI_H
#define CR_ANSI_H

// Cursor
#define CR_ANSI_CURSOR_UP(n)    printf("\033[%dA", n)
#define CR_ANSI_CURSOR_DOWN(n)  printf("\033[%dB", n)
#define CR_ANSI_CURSOR_RIGHT(n) printf("\033[%dC", n)
#define CR_ANSI_CURSOR_LEFT(n)  printf("\033[%dD", n)

#define CR_ANSI_CURSOR_TO(r, c) printf("\033[%d;%dH", r, c)

// Foreground
#define CR_ANSI_FORE_DEFAULT() printf("\x1b[39m")

#define CR_ANSI_FORE_BLACK()   printf("\x1b[30m")
#define CR_ANSI_FORE_RED()     printf("\x1b[31m")
#define CR_ANSI_FORE_GREEN()   printf("\x1b[32m")
#define CR_ANSI_FORE_YELLOW()  printf("\x1b[33m")
#define CR_ANSI_FORE_BLUE()    printf("\x1b[34m")
#define CR_ANSI_FORE_MAGENTA() printf("\x1b[35m")
#define CR_ANSI_FORE_CYAN()    printf("\x1b[36m")
#define CR_ANSI_FORE_WHITE()   printf("\x1b[37m")

#define CR_ANSI_FORE_BRIGHT_BLACK()   printf("\x1b[90m")
#define CR_ANSI_FORE_BRIGHT_RED()     printf("\x1b[91m")
#define CR_ANSI_FORE_BRIGHT_GREEN()   printf("\x1b[92m")
#define CR_ANSI_FORE_BRIGHT_YELLOW()  printf("\x1b[93m")
#define CR_ANSI_FORE_BRIGHT_BLUE()    printf("\x1b[94m")
#define CR_ANSI_FORE_BRIGHT_MAGENTA() printf("\x1b[95m")
#define CR_ANSI_FORE_BRIGHT_CYAN()    printf("\x1b[96m")
#define CR_ANSI_FORE_BRIGHT_WHITE()   printf("\x1b[97m")

// Background
#define CR_ANSI_BACK_DEFAULT() printf("\x1b[49m")

#define CR_ANSI_BACK_BLACK()   printf("\x1b[40m")
#define CR_ANSI_BACK_RED()     printf("\x1b[41m")
#define CR_ANSI_BACK_GREEN()   printf("\x1b[42m")
#define CR_ANSI_BACK_YELLOW()  printf("\x1b[43m")
#define CR_ANSI_BACK_BLUE()    printf("\x1b[44m")
#define CR_ANSI_BACK_MAGENTA() printf("\x1b[45m")
#define CR_ANSI_BACK_CYAN()    printf("\x1b[46m")
#define CR_ANSI_BACK_WHITE()   printf("\x1b[47m")

#define CR_ANSI_BACK_BRIGHT_BLACK()   printf("\x1b[100m")
#define CR_ANSI_BACK_BRIGHT_RED()     printf("\x1b[101m")
#define CR_ANSI_BACK_BRIGHT_GREEN()   printf("\x1b[102m")
#define CR_ANSI_BACK_BRIGHT_YELLOW()  printf("\x1b[103m")
#define CR_ANSI_BACK_BRIGHT_BLUE()    printf("\x1b[104m")
#define CR_ANSI_BACK_BRIGHT_MAGENTA() printf("\x1b[105m")
#define CR_ANSI_BACK_BRIGHT_CYAN()    printf("\x1b[106m")
#define CR_ANSI_BACK_BRIGHT_WHITE()   printf("\x1b[107m")

#endif
