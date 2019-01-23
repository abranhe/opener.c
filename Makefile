SRC = example.c open.c $(wildcard deps/*/*.c)

OBJ_SRC = $(SRC:.c=.o)

CFLAGS = -D_GNU_SOURCE -std=c99 -I deps/os.c/

LFLAGS = -Wall -Wno-format-y2k -W -Wstrict-prototypes \
	-Wpointer-arith -Wreturn-type -Wcast-qual -Wwrite-strings -Wswitch \
	-Wshadow -Wcast-align -Wbad-function-cast -Wchar-subscripts -Winline \
	-Wnested-externs -Wredundant-decls

example: $(OBJ_SRC)
	$(CC) $(OBJ_SRC) -o $@

# test: $(OBJ_TEST)
# 	$(CC) $(OBJ_TEST) -o $@

.SUFFIXES: .c .o
.c.o:
	$(CC) $< $(CFLAGS) $(LFLAGS) -c -o $@

# run-test: test
# 	./test

run-example: example
	./example

clean:
	rm -f open example *.o deps/**/*.o *.gc{ov,da,no}