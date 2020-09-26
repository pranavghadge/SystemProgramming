In this project we are accepting the file name from the user 
and opening that file in given mode 

(Note: create a file so that we can open the file in specificed mode)

STEPS:
1.To build the project type: make build

2.To run the file type: make ARGS="filename mode" run
	eg: make ARGS="test.txt read" run
	eg: make ARGS="test.txt write" run
	eg: make ARGS="test.txt read_write" run
	eg: make ARGS="test.txt create" run
	eg: make ARGS="test.txt truncate" run

3.To remove the generated executable file type: make clean

4.To get some help type: make help
