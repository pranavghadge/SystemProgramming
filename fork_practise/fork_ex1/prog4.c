#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//this is the best way of calling fork system call because text data stack gets a copy of parent 
int main(){
	printf("Hello\n");		//only for parent
		if(fork() == 0){		//child
			printf("A\n");
	}
	else{				//parent
		printf("B\n");
	}
	
	exit(0);
}

/*
pranavv_1111@Pranav:~/Marvel_Oct4/fork_ex1$ ./exe
Hello
B
A
*/
