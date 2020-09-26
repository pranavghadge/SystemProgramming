////////////////////////////////////
// Problem Satement : Program Which is used to add 2 numbers
///////////////////////////////////
#include<stdio.h>

int addition(int iNo1, int iNo2){
	return iNo1 + iNo2;
	}
	
int main(){
	int iRet;
	iRet = addition(10,20);
	printf("Addition is: %d\n",iRet);
	return 0;
	}

/*
Terminal Commands: 
	gcc prog1.c -o myexe
	./myexe
*/
