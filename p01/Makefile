OBJ = main.o
INC = -I "./"

p01: $(OBJ)
	g++ $(OBJ) -o p01.exe
	rm -f $(OBJ)

main.o:
	g++ -c main.cpp $(INC)
	
clean:
	rm -f $(OBJ) p01
