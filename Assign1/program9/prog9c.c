#include<stdio.h>
#include<unistd.h>       //universal standard library
#include<fcntl.h>        //file control open,close etc
#include<string.h>

int main(int argc, char *argv[]){
	int fd = 0,ret = 0;
	if (argc != 2){
		printf("Error: Insufficient Arguments\n");
		return -1;
	}
	
	fd = creat(argv[1],0777);
	if(fd == -1){
		printf("Error: Unable to create the file\n");
		return -1;
	}
	
	printf("File gets successfuly created");
	return 0;
	}
