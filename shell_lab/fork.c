#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char* argv[])
{

	pid_t pid; 
	pid = fork();

	if(pid == 0){ // child 
		printf("i am child : my pid is = %d\n",getpid());
		execvp(argv[1], argv);
	} else { // parent 
		printf("i am parent: child pid is = %d\n",pid);
		wait();
	}
}
