////////////////////////////////////
// Problem Satement : Program to accept filename from user and open that file and if file not available display the error message
///////////////////////////////////

#include<stdio.h>
#include<unistd.h>       //universal standard library
#include<fcntl.h>        //file control open,close etc

int main(int argc, char *argv[]){
	int fd = 0;
	
	if(argc != 2){
		printf("Error: Invalid arguments\n ");
		return -1;
	}
	
	fd = open(argv[1],O_RDONLY);
	
	if(fd == -1){
		printf("Error: Unable to open file\n");
		return -1;
	}
	
	printf("File is Successfully opened with FD=%d\n",fd);
	
	close(fd);
	
	return 0;
}
