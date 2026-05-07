#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void MarvellousHandler(int no)                                  // Prototype can't be changed
{
    if(no == SIGUSR1)
    {
        printf("Marvellous Message - SIGUSR1 Arrived\n");
    }
    if(no == SIGINT)
    {
        printf("Marvellous Message - SIGINT Arrived\n");
    }
}

int main()
{
    printf("PID is : %d\n", getpid());

    signal(SIGUSR1, MarvellousHandler);
    signal(SIGINT, MarvellousHandler);

    while(1)
    {
        sleep(1);
    }

    return 0;
}