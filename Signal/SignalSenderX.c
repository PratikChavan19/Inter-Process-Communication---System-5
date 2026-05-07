#include<stdio.h>
#include<unistd.h>
#include<signal.h>

int main()
{
    pid_t pid = 0;

    printf("Ennter the PID of Process : \n");
    scanf("%d", &pid);

    kill(pid, SIGUSR1);

    return 0;
}