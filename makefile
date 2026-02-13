.PHONY: build run cppcheck

build:
	gcc -Wall -Wextra -pedantic -Werror src/main.c -o riichi

build2:
	gcc -Wall -Wextra -pedantic -Werror src/main2.c -o riichi

run2: build2
	./riichi


run: build
	./riichi

cppcheck:
	cppcheck --enable=warning,style,performance,portability --error-exitcode=1 ./src
