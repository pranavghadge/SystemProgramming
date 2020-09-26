////////////////////////////////////
// Problem Satement : Program which accept filename and number of bytes from user and read that number of bytes from file
///////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc,char *argv[]){
	int fd,ret,offset;
	char *buff = NULL;
	
	if(argc != 3){
		printf("Error: Insuffiient Arguments\n");
		return -1;
	}
	
	// when the file is opened in read mode,file contents is accessed from 0th byte offset
	fd = open(argv[1],O_RDONLY);
	if(fd == -1){
		printf("Error: Unable to open the file\n");
		close(fd);
		return -1;
	}
	
	// in read system call accepted parameters are: read(file desciptor,empty bufffer,no of bytes to read from file)
	
	//to allocate memory to local buffer
	
	buff = (char*)malloc(sizeof(char)*atoi(argv[2]));		// atoi stands for ascii to integer
	if(buff == NULL){
		printf("Error: Failure in memory allocation\n");
		return -1;
	}
	
	ret = read(fd,buff,atoi(argv[2]));
	
	if(ret != atoi(argv[2])){
		printf("Error: Unable to read the bytes from file\n");
	}
	else{
		printf("Contents of file %s are:\n%s \n",argv[1],buff);
	}
	
	free(buff);
	close(fd);
	return 0;
}
