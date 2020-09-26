////////////////////////////////////
// Problem Satement : Program which accept filename from user and print all information about that file
///////////////////////////////////
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>

int main(int argc,char *argv[]){
	int ret;
	//stat is the inbuilt structure
	struct stat fileStat;						//creating object of stat named filestat
	
	if(argc != 2){
		printf("Error: Insuffcient Arguments\n");
		return -1;
	}
	
	// without opening the file
	ret = stat(argv[1],&fileStat);				//stat function accpets filename as parameter and returns 1 if success
	
	if(ret = -1){
		printf("Error: Unable to get Statistics\n");
		return -1;
	}
	
	printf("*****Statistics of file*****\n");
	printf("File Size:\t %d bytes\n",(int)fileStat.st_size);
	printf("No of Links:\t %d\n",(int)fileStat.st_nlink);
	printf("File iNode:\t %d\n",(int)fileStat.st_ino);
	printf("File System Number:\t %d\n",(int)fileStat.st_dev);
	printf("No of Blocks Allocated:\t %d\n",(int)fileStat.st_blocks);
	
	// file permissions are displayed in drwx (owner,group,other) format 
	// we use "bitwise and" & a mask is used if it has a file permission it displays the mode as d/r/w/x and if not displays "-"
	printf("File Permissions: \t");
	printf( (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
	printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");		// IRUSR is a internally defined macro and so are the other
	printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
	printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
	printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
	printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
	printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
	printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
	printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
	printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
	printf("\n\n");
	 
	if(S_ISLNK(fileStat.st_mode))
	{
		printf("It is symbolic link\n");
	}
	else
	{
		printf("It is not symbolic link\n");
	}

	return 0;
}
