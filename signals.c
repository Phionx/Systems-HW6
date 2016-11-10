#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


static void sighandler(int signo){
	if (signo == SIGINT){
		printf("\nRIP, SIGINT was the killer.\n");
		exit(0);
	}
	if (signo == SIGUSR1) printf("\nParent: %d\n", getppid());
}


int main(){
	signal (SIGINT, sighandler);
	signal (SIGUSR1, sighandler);

	while(1){
		printf("STUPID TESTING, PID: %d\n", getpid());
		sleep(1);
	}
	return 0;
}
