////////////////////////////////////
// Problem Satement : Program to accept filename from user and write into it
///////////////////////////////////

#include<stdio.h>
#include<unistd.h>       //universal standard library
#include<fcntl.h>        //file control open,close etc
#include<string.h>

int main(int argc, char *argv[]){
	int fd = 0,ret = 0;
	char arr[10] = "Marvellous";
	fd = open(argv[1],O_WRONLY);
	ret = write(fd, arr,strlen(arr));
	return 0;
}
