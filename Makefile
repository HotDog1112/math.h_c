CC=gcc
CFLAGS= -Wall -Wextra -Werror -std=c11 -pedantic

SOURCES=s21_*.c
OBJECTS=s21_*.o


all: s21_math.a

s21_math.a:
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rc s21_math.a $(OBJECTS)
	ranlib s21_math.a
	rm -f *.o

cppcheck: 
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
linter:
	python3 ../materials/linters/cpplint.py --extensions=c *.c *.h
check_all: cppcheck linter

push: 
	git add .
	git commit -m "insertion"
	git push origin develop

clean:
	rm *.a *.o
