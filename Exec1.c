#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("PID of Exec1.c = %d\n", getpid());
    char *args[] = {"Hello", "C", "Programming", NULL};
    execv("./Exec2", args);
    printf("Back to Exec1.c");
    return 0;
}
