#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	int ret = 0;
	ret = fork();
	
	if ((ret = fork()) == 0){		//child process is running
		printf("Child process is running with PID: %d\n",getpid());
		printf("Parent of child process is: %d\n",getppid());
		printf("Child says: Value of ret is: %d\n",ret);
	}
	else{		//parent process is runnning
		printf("Parent process is running with PID: %d\n",getpid());
		printf("Parent of parent process is(Terminal): %d\n",getppid());
		printf("Child says: Value of ret is: %d\n",ret);
	}
	exit(0);
}

/*
fork has 2 return values(return 0(successfull creation of child),pid of child process)

we cant predict the output depends on the process scheduling of OS

there is no function which gives the id of childs processs to parent process except the fork function
*/
