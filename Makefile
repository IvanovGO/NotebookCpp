sources = Application.cpp main.cpp
CFLAGS = -Wall -Wpedantic -ggdb -g3 -C21 
LDFLAGS = -lpanel -lncurses

all:
	g++ $(sources) -o app $(CFLAFS) $(LDFLAGS)
