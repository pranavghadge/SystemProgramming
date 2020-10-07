#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	int i = 10;			//part of stack section
	if(fork() == 0){		//child
		++i;
		printf("%d\n",i);
	}
	else{				//parent
		++i;
		printf("%d\n",i);
	}
	
	exit(0);
}

//stack segment of parent gets copied to child process

/*
pranavv_1111@Pranav:~/Marvel_Oct4/fork_ex1$ ./exe
11
11
*/
