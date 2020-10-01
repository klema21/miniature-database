build:
	g++ -w -std=c++17 \
	*.cpp \
	-o database 

clean:
	rm ./database;

run:
	./database;
