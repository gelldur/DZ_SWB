CC:=g++
CFLAGS:=-c -Wall -D_DEBUG

.PHONY : build clean rebuild

src = main.cpp indeks362617.cpp nazwa_dluga.cpp nazwa_krotka.cpp nazwisko.cpp imie.cpp
objects = $(src:.cpp=.o)

build: app

clean:
	rm -f app
	rm -f *.o

rebuild: clean build

app: $(objects)
	$(CC) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o $@
