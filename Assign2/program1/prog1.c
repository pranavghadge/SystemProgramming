////////////////////////////////////
// Problem Satement : Program to accept filename from user and open that file
///////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc,char *argv[]){
	int fd = 0;
	
	if(argc != 2){
		printf("Error: Insufficient Arguments\n");
		return -1;
	}
	
	fd = open(argv[1],O_RDONLY);
	
	if (fd == -1){
		printf("Error: Unable to open the file\n");
		return -1;
	}
	
	printf("File Opened Successfully with fd:%d\n",fd);
	
	return 0;
	}
