#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int i = 10;				// part of data section

int main(){
	if(fork() == 0){		//child
		++i;
		printf("%d\n",i);
	}
	else{				//parent
		++i;
		printf("%d\n",i);
	}
	
	exit(0);
}
