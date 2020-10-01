build:
	g++ -w -std=c++17 -Wfatal-errors \
	*.cpp \
	-o database 

clean:
	rm ./database;

run:
	./database;
