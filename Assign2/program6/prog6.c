////////////////////////////////////
// Problem Satement : Program which accept filename from user and read whole file
///////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc,char *argv[]){
	int fd,ret,offset;
	char buff[256];
	
	if(argc != 2){
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
	
	while((ret = read(fd,buff,256)) != 0){				//output mug by mug till the bucket is equal to 0
		//printf("%s",buff);
		write(1,buff,ret);
	}
	
	printf("\n");
	
	close(fd);
	
	return 0;
}
