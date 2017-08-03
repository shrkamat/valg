#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define PARENT_MEM_LEAK

#define WELCOME_MSG "Hello, World\n"

void launch(char *app)
{
    pid_t pid;

    if ((pid = fork()) == 0) {
        /* child */
        execl(app, app, NULL);
        perror ("app spawn failed\n");
    } else {
        /* parent, wait for child to exit */
        int status = 0;
        waitpid(pid, &status, 0);
    }
}

int main( void )
{
#ifdef PARENT_MEM_LEAK
    char *c = strdup (WELCOME_MSG);
#else
    char *c = WELCOME_MSG;
#endif
    printf ("%s", c);
    launch ("childA");
}
