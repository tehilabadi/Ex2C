CC=gcc
AR=ar
OBJECT_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g -fPIC

all:maind mains

mains: mybanks main.o
	$(CC) $(FLAGS) -o mains $(OBJECT_MAIN) ./libmyBank.a
	
# Creates library for the file objects	
maind: mybankd main.o
	$(CC) $(FLAGS) -o maind $(OBJECT_MAIN) ./libmyBank.so
	
# links main and the static library
mybankd: $(OBJECTS_LIB) 
	$(CC) -shared -o libmyBank.so $(OBJECTS_LIB)
	
#links main and the shared library	
mybanks: $(OBJECTS_LIB)
	$(AR) -rcs libmyBank.a $(OBJECTS_LIB)	
	
# Links power and .h
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -fPIC -c myBank.c	

# Links Main and .h
main.o: main.c myBank.h  
	$(CC) $(FLAGS) -c main.c 
	
.PHONY: clean all

# Removes all .o .a and .so files. also mains and maind
clean:
	rm -f *.o *.a *.so mains maind
