C =g++
CPPFLAGD = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/
all: test.cpp
	$(OBJ)test.o: $ (SRC)test.cpp
	$(CC) $(CPPFLAGS) $(SRC) resr.cpp -I $(INCLUDE)
	mv test.o $(OBJ)
$(OBJ)test0.o: $(SRC)test0.cpp
	$(CC) $(CPPFLAGS) $(SRC)test0.cpp -I $(INCLUDE)
	mv test0.o $(OBJ)
	 clean:
	 @echo "cleaning the project"
	 rm -f a.out cpp *.o
	 rm -f $(OBJ)*.o
	 re -f $(BIN)cpp

