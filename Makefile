FLAG := -g -O0 -std=gnu99
all: ini_test
ini_test: ini_test.o ini_manage.o
	$(CC) $(FLAG) -o ini_test ini_test.c ini_manage.c
ini_test.o: ini_test.c
	$(CC) $(FLAG) -c ini_test.c
ini_manage.o: ini_manage.c
	$(CC) $(FLAG) -c ini_manage.c
clean:
	rm *.o ini_test
