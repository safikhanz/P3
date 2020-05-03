CC = g++
CFLAGS = -std=c++0x
TARGET = P3.exe
OBJS = main.o Scanner.o Parser.o StaticSemantics.o
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: StaticSemantics.h
	$(CC) $(CFLAGS) -c main.cpp
Parser.o: Parser.h 
	$(CC) $(CFLAGS) -c Parser.cpp
Scanner.o: Scanner.h 
	$(CC) $(CFLAGS) -c Scanner.cpp
StaticSemantics.o: StaticSemantics.h
	$(CC) $(CFLAGS) -c StaticSemantics.cpp

clean:
	/bin/rm -f *.o $(TARGET)
