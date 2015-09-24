#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	int a = 0;
	pid_t pid, ppid, chpid;

	chpid = fork();
	if (chpid>0) {
		printf("Parent process output\n");
	} else{
		printf("Child process output\n");
	}
	a = a + 1;

	pid = getpid();
	ppid = getppid();

	printf("pid = %d, ppid = %d, chpid = %d, a = %d \n", pid, ppid, chpid, a);

	return 0;
}
