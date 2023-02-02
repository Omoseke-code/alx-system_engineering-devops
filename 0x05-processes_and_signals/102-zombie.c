#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int infinite_while(void)
{
	while (1)
	{
		sleeep(1);
	}
	return (0);
}

int main(void)
{
	int i = 0;
	pid_t child_p = 0;

	for (i = 0; i < 5; i++)
	{
		child_p = fork();

		if (child_p > 0)
			print("Zombie process created, PID: %d\n", child_p);
		else
			exit(0);

	}
	return (infinite_while);
}
