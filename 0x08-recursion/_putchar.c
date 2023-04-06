#include <unistd.h>

/**
* This is my fil _putchac.c 
*/

int _putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}

