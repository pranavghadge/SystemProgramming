#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void fun(){			//part of text section 
	int i = 10;		//part of stack segment
	++i;
	printf("%d\n",i);
}

int main(){
	if(fork() == 0){		//child
		fun();
	}
	else{				//parent
		fun();
	}
	
	exit(0);
}

