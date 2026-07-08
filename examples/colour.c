// colour.c
// Example usage of foreground and background colours

#include <stdio.h>
#include "../include/crioch/cr_ansi.h"

int main(void)
{
    CR_ANSI_FORE_BLACK();
    printf("Black foreground\n");
    CR_ANSI_FORE_RED();
    printf("Red foreground\n");
    CR_ANSI_FORE_GREEN();
    printf("Green foreground\n");
    CR_ANSI_FORE_YELLOW();
    printf("Yellow foreground\n");
    CR_ANSI_FORE_BLUE();
    printf("Blue foreground\n");
    CR_ANSI_FORE_MAGENTA();
    printf("Magenta foreground\n");
    CR_ANSI_FORE_CYAN();
    printf("Cyan foreground\n");
    CR_ANSI_FORE_WHITE();
    printf("White foreground\n");

    CR_ANSI_FORE_BRIGHT_BLACK();
    printf("Bright black foreground\n");
    CR_ANSI_FORE_BRIGHT_RED();
    printf("Bright red foreground\n");
    CR_ANSI_FORE_BRIGHT_GREEN();
    printf("Bright green foreground\n");
    CR_ANSI_FORE_BRIGHT_YELLOW();
    printf("Bright yellow foreground\n");
    CR_ANSI_FORE_BRIGHT_BLUE();
    printf("Bright blue foreground\n");
    CR_ANSI_FORE_BRIGHT_MAGENTA();
    printf("Bright magenta foreground\n");
    CR_ANSI_FORE_BRIGHT_CYAN();
    printf("Bright cyan foreground\n");
    CR_ANSI_FORE_BRIGHT_WHITE();
    printf("Bright white foreground\n");

    CR_ANSI_FORE_DEFAULT();
    printf("Default foreground\n");

    CR_ANSI_BACK_BLACK();
    printf("Black background\n");
    CR_ANSI_BACK_RED();
    printf("Red background\n");
    CR_ANSI_BACK_GREEN();
    printf("Green background\n");
    CR_ANSI_BACK_YELLOW();
    printf("Yellow background\n");
    CR_ANSI_BACK_BLUE();
    printf("Blue background\n");
    CR_ANSI_BACK_MAGENTA();
    printf("Magenta background\n");
    CR_ANSI_BACK_CYAN();
    printf("Cyan background\n");
    CR_ANSI_BACK_WHITE();
    printf("White background\n");

    CR_ANSI_BACK_BRIGHT_BLACK();
    printf("Bright black background\n");
    CR_ANSI_BACK_BRIGHT_RED();
    printf("Bright red background\n");
    CR_ANSI_BACK_BRIGHT_GREEN();
    printf("Bright green background\n");
    CR_ANSI_BACK_BRIGHT_YELLOW();
    printf("Bright yellow background\n");
    CR_ANSI_BACK_BRIGHT_BLUE();
    printf("Bright blue background\n");
    CR_ANSI_BACK_BRIGHT_MAGENTA();
    printf("Bright magenta background\n");
    CR_ANSI_BACK_BRIGHT_CYAN();
    printf("Bright cyan background\n");
    CR_ANSI_BACK_BRIGHT_WHITE();
    printf("Bright white background\n");

    CR_ANSI_BACK_DEFAULT();
    printf("Default background\n");

    return 0;
}
