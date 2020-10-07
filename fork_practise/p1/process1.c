#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){

	printf("Process is running...\n");
	printf("PID or parent process is:%d\n",getppid());
	printf("PID or current process is:%d\n",getpid());
	
	for(;;){}
	
	return 0;
}

/*
gcc -save-temps process1.c
pranavv_1111@Pranav:~/Marvel_Oct3/p1$ ls
a.out  process1.c  process1.i  process1.o  process1.s
pranavv_1111@Pranav:~/Marvel_Oct3/p1$ gcc -save-temps process1.c -o myexe
*/

