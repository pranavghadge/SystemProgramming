create:
	gcc prog1c.c -o create

runcreate:
	./create ${ARGS}

open:
	gcc prog1.c -o open

runopen:
	./open ${ARGS}

clean:
	rm create
	rm open

help:
	@echo 'Use as "make create" / "make ARGS="Filename" runcreate " / "make open" / "make ARGS="filename" runopen" / "make clean" '
