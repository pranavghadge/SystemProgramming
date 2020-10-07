#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

/*
	after forksystem call child process gets acopy of parents text,data,stack,heap and all
	child gets access to all the files which are opened by the parent process
*/
 
int main(){
	int fd  = 0;
	fd = open("9Demo.txt",O_WRONLY);	//file open by parent process
	
	if(fork() == 0){		//child
		write(fd,"Child",5);
	}
	
	else{				//parent
		write(fd,"Parent",6);
	}
	
	exit(0);
}
