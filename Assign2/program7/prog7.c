////////////////////////////////////
// Problem Satement : Program which accept filename from user and write string in that file
///////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(int argc,char *argv[]){
	int fd = 0,ret = 0;
	char buff[256];
	
	if(argc != 2){
		printf("Error: Insuffiient Arguments\n");
		return -1;
	}
	
	fd = open(argv[1],O_WRONLY | O_TRUNC);
	
	if(fd == -1){
		printf("Error: Unable to open the file\n");
		close(fd);
		return -1;
	}
	
	printf("Enter the string that we want to write in file \n");
	scanf("%[^\n]",buff);
	
	ret = write(fd,buff,strlen(buff));
	
	if(ret != strlen(buff))
	{
		printf("Error: Unable to write whole contents\n");
	}
	
	printf("Successfully wriiten on to the file\n");
	
	close(fd);
	
	return 0;
}
