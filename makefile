CC = g++
CPPFLAGS =-c -Wall -g -std=c++11

all: MSG.exe

MSG.exe: Driver.o Engine.o MainMsg.o MainContact.o TypeContact.o TypeMsg.o Application.o
	$(CC)  Driver.o Engine.o MainMsg.o MainContact.o TypeContact.o TypeMsg.o Application.o -o MSG.exe
Driver.o: Driver.cpp
	$(CC) $(CPPFLAGS) Driver.cpp
Engine.o: Engine.cpp
	$(CC) $(CPPFLAGS) Engine.cpp
MainMsg.o: MainMsg.cpp
	$(CC) $(CPPFLAGS) MainMsg.cpp
MainContact.o: MainContact.cpp
	$(CC) $(CPPFLAGS) MainContact.cpp
TypeContact.o: TypeContact.cpp
	$(CC) $(CPPFLAGS) TypeContact.cpp
TypeMsg.o: TypeMsg.cpp
	$(CC) $(CPPFLAGS) TypeMsg.cpp
Application.o:Application.cpp
	$(CC) $(CPPFLAGS) Application.cpp

.PHONY: clean
clean:			# clean the directory
			$(info -- cleaning the directory --)
			rm -f *.o
			rm -f MSG.exe
