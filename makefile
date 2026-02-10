.PHONY: build run cppcheck

build:
	gcc -Wall -Wextra -pedantic -Werror src/main.c -o riichi

run: build
	./riichi

cppcheck:
	cppcheck --enable=warning,style,performance,portability --error-exitcode=1 ./src
