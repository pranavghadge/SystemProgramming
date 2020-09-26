////////////////////////////////////
// Problem Satement : Program which is accepts filename and on mode and check whether our 
// process can access that file in accpeted mode or not
///////////////////////////////////
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

int main(int argc,char *argv[]){
	int mode;
	
	if(argc != 3){
		printf("Error: Insufficient Arguments\n");
		return -1;
	}
	
	if (strcmp(argv[2],"read") == 0){
		mode = R_OK;
	}
	
	else if (strcmp(argv[2],"write") == 0){
		mode = W_OK;
	}
	
	else if (strcmp(argv[2],"execute") == 0){
		mode = X_OK;
	}
	
	if (access(argv[1],mode) < 0)
	{
		printf("You cannot access the file for %s purpose\n",argv[2]);
	}
	else
	{
		printf("Our process has %s access\n",argv[2]);
	}
	
	return 0;
}
