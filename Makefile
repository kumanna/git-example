all: factorial_program

factorial_program: factorial.c
	gcc -o factorial_program factorial.c

.PHONY: clean
clean:
	$(RM) factorial_program

