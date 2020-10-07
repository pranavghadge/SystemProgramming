#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	int *p = NULL;
	p = (int *)malloc(4);		//part of heap ie data section
	*p = 10;
	
	if(fork() == 0){		//child
		++(*p);
		printf("%d\n",*p);
	}
	else{				//parent
		++(*p);
		printf("%d\n",*p);
	}
	
	exit(0);
}
