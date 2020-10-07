#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//this is the worst way of calling fork system call because text data stack gets a copy of parent 
int main(){
	printf("Hello\n");		//only for parent
	fork();			//child process gets created
	printf("World\n");		//for parent and child
	
	exit(0);
}

/*
pranavv_1111@Pranav:~/Marvel_Oct4/fork_ex1$ ./myexe
Hello
World
World
*/
