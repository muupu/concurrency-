CC=		gcc
CFLAGS=	-Wall -ggdb -W -O

globalcount:globalcount.cpp
    $(CC) $(CFLAGS) -o globalcount -O2 globalcount.cpp -lpthread

clean:
	-rm -f *.o globalcount

.PHONY: clean 