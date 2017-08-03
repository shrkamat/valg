#include <stdio.h>
#include <string.h>
#define WELCOME_MSG "Hello, from child A\n"

int main (int argc, char *argv[])
{
    char *str = strdup (WELCOME_MSG);

    printf ("%s", str);

    return 0;
}
