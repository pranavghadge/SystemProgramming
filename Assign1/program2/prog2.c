////////////////////////////////////
// Problem Satement : Program to accept name from command line argument and display it on screen
///////////////////////////////////
#include<stdio.h>

int main(int argc ,char *argv[]){
	if(argc != 2){
		printf("Error: Inavlid Argument\n");
		return -1;
		}
	else{
		printf("Name is: %s \n",argv[1]);
		}
	}

/*
Terminal Commands: 
	gcc prog2.c -o myexe
	./myexe MyProgram
*/
