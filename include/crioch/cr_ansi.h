// cr_ansi.h
// macro defs for ansi escape sequences

#ifndef CR_ANSI_H
#define CR_ANSI_H

// Cursor Movement
#define CR_ANSI_CURSOR_UP(n)    printf("\033[%dA", n)
#define CR_ANSI_CURSOR_DOWN(n)  printf("\033[%dB", n)
#define CR_ANSI_CURSOR_RIGHT(n) printf("\033[%dC", n)
#define CR_ANSI_CURSOR_LEFT(n)  printf("\033[%dD", n)

#define CR_ANSI_CURSOR_TO(r, c)      printf("\033[%d;%dH", r, c)
#define CR_ANSI_CURSOR_TO_COL(n)     printf("\033[%dG", n)
#define CR_ANSI_CURSOR_UP_LINES(n)   printf("\033[%dF", n)
#define CR_ANSI_CURSOR_DOWN_LINES(n) printf("\033[%dE", n)

#define CR_ANSI_CURSOR_SAVE()    printf("\033[s")
#define CR_ANSI_CURSOR_RESTORE() printf("\033[u")

// Cursor Formatting
#define CR_ANSI_CURSOR_BLINK_SLOW()    printf("\033[5m")
#define CR_ANSI_CURSOR_BLINK_FAST()    printf("\033[6m")
#define CR_ANSI_CURSOR_BLINK_DISABLE() printf("\033[25m")

#define CR_ANSI_CURSOR_SHOW() printf("\033[?25h")
#define CR_ANSI_CURSOR_HIDE() printf("\033[?25l")

// Clearing
#define CR_ANSI_CLEAR_SCREEN()    printf("\033[2J")
#define CR_ANSI_CLEAR_TO_END()    printf("\033[J")
#define CR_ANSI_CLEAR_UP()        printf("\033[1J")
#define CR_ANSI_CLEAR_DOWN()      printf("\033[0J")
#define CR_ANSI_CLEAR_RIGHT()     printf("\033[K")
#define CR_ANSI_CLEAR_LINE()      printf("\033[2K")
#define CR_ANSI_CLEAR_LINE_NEXT() printf("\033[0K")
#define CR_ANSI_CLEAR_LINE_PREV() printf("\033[1K")

// Line & Character insertion
#define CR_ANSI_LINE_INSERT() printf("\033[1L")
#define CR_ANSI_LINE_DELETE() printf("\033[1M")

#define CR_ANSI_CHAR_INSERT() printf("\033[@")
#define CR_ANSI_CHAR_DELETE() printf("\033[1P")

// Text Formatting
#define CR_ANSI_RESET()                 printf("\033[0m")
#define CR_ANSI_BOLD()                  printf("\033[1m")
#define CR_ANSI_DIM()                   printf("\033[2m")
#define CR_ANSI_NORMAL()                printf("\033[22m")
#define CR_ANSI_ITALIC()                printf("\033[3m")
#define CR_ANSI_ITALIC_DISABLE()        printf("\033[23m")
#define CR_ANSI_UNDERLINE()             printf("\033[4m")
#define CR_ANSI_UNDERLINE_DISABLE()     printf("\033[24m")
#define CR_ANSI_REVERSE()               printf("\033[7m")
#define CR_ANSI_REVERSE_DISABLE()       printf("\033[27m")
#define CR_ANSI_HIDDEN()                printf("\033[8m")
#define CR_ANSI_HIDDEN_DISABLE()        printf("\033[28m")
#define CR_ANSI_STRIKETHROUGH           printf("\033[9m")
#define CR_ANSI_STRIKETHROUGH_DISABLE() printf("\033[29m")

// Foreground Colours
#define CR_ANSI_FORE_DEFAULT() printf("\x1b[39m")

#define CR_ANSI_FORE_RGB(r, g, b) printf("\033[38;2;%d;%d;%dm", r, g, b)
#define CR_ANSI_FORE_256(n)       printf("\033[38;5;%dm", n)

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

// Background Colours
#define CR_ANSI_BACK_DEFAULT() printf("\x1b[49m")

#define CR_ANSI_BACK_RGB(r, g, b) printf("\033[48;2;%d;%d;%dm", r, g, b)
#define CR_ANSI_BACK_256(n)       printf("\033[48;5;%dm", n)

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
