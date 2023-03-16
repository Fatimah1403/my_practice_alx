#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessfull\n");
		return 1;
	}
	if (pid == 0)
	{
		sleep(40);
		printf("I am the child\n");
	}
	else
		ppid = getpid();
		printf("The parent pid is: %u\n", ppid);

	return 0;
}
