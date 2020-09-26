////////////////////////////////////
// Problem Satement : Program which accept file name and mode from user and then open that file in specificed mode
///////////////////////////////////
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(int argc,char *argv[]){
	int fd = 0;
	int mode = 0;
	// char strarr[3][10] = {"read","write","readwrite"};
	// char *read = "read";
	// char *write = "write";
	// char *readwrite = "readwrite";
	
	if(argc != 3){
		printf("Error: Insufficient Arguments\n");
		return -1;
	}
	
	if ((strcmp(argv[2],"read")) == 0){
		mode = O_RDONLY;
	}
	
	else if ((strcmp(argv[2],"write")) == 0){
		mode = O_WRONLY;
	}
	
	else if ((strcmp(argv[2],"read_write")) == 0){
		mode = O_RDWR;
	}
	
	else if ((strcmp(argv[2],"create")) == 0){
		mode = O_CREAT;
	}
	
	else if ((strcmp(argv[2],"truncate")) == 0){
		mode = O_WRONLY | O_TRUNC;
	}
	
	else{
		printf("Invalid argument\n");
		return -1;
	}
	
	fd = open(argv[1],mode);
	if(fd == -1){
		printf("Error: Unable to open the file\n");
	}
	else{
		printf("Opened the file with fd: %d and mode:%s\n",fd,argv[2]);
	}
	
		return 0;
	
	close(fd);
	
	return 0;
}
