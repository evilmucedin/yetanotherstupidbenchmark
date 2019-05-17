all: cpp csharp

write: write.cpp
	g++ -O3 -march=native -o write write.cpp
	./write

cpp: test.cpp write
	g++ -O3 -march=native -o test test.cpp
	time ./test

csharp: test.cs write
	time dotnet run
