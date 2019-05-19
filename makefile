all: cpp csharp

gen: gen.py
	./gen.py >gen.cpp

write: write.cpp
	g++ -O4 -march=native -o write write.cpp
	./write

cpp: test.cpp write gen.cpp
	g++ -O4 -march=native -fprofile-use -o test test.cpp
	time ./test

cpp-profile: test.cpp write gen.cpp
	g++ -O4 -fprofile-generate -o test-profile test.cpp
	time ./test-profile

csharp: test.cs write
	time dotnet run -c Release
