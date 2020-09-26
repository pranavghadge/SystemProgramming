create:
	gcc prog9c.c -o myexe

write:
	gcc prog9w.c -o myexe2

runcreate:
	./myexe ${ARGS}

runwrite:
	./myexe2 ${ARGS}

help:
	@echo 'Use as "make create" / "make write" / "make ARGS="filename" runcreate" / "make ARGS="filename" runwrite" '

// Steps to run the file
// make create
// make ARGS="test.txt" runcreate
// make write
// make ARGS="test.txt" runwrite
