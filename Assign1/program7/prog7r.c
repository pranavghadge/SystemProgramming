////////////////////////////////////
// Problem Satement : Program to accept filename from user and read first 5 characters from it
///////////////////////////////////

#include<stdio.h>
#include<unistd.h>       //universal standard library
#include<fcntl.h>        //file control open,close etc
#include<string.h>

int main(int argc, char *argv[]){
	int fd = 0,ret = 0;
	char arr[11];
	fd = open(argv[1],O_RDONLY);
	ret = read(fd, arr,5);
	write(1,arr,ret);		//reservered file descriptor (0->STDIN);(1->STDOUT);(2->STDERROR)
	printf("\n");
	// printf("Data after Read: %s\n",arr);	// it accepts data till \0 so generates false values
	return 0;
}
