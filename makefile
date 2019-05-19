all: cpp csharp

gen: gen.py
	./gen.py >gen.cpp

write: write.cpp
	g++ -O4 -fomit-frame-pointer -march=native -o write write.cpp 
	./write

cpp: test.cpp write gen.cpp cpp-profile gen
	g++ -O4 -fomit-frame-pointer -march=native -fprofile-use -o test test.cpp
	time ./test

cpp-profile: test.cpp write gen.cpp gen
	rm -f test.gcda
	g++ -O4 -fomit-frame-pointer -fprofile-generate -march=native -o test-profile test.cpp
	time ./test-profile

cpp-clang: test.cpp write gen.cpp cpp-clang-profile
	clang++ -O4 -fomit-frame-pointer -march=native -std=c++17 -fprofile-instr-use=clang.prof -o test-clang test.cpp
	time ./test-clang

cpp-clang-profile: test.cpp write gen.cpp
	clang++ -O4 -fprofile-instr-generate -march=native  -std=c++17 -o test-clang-profile test.cpp
	LLVM_PROFILE_FILE="clangraw.prof" time ./test-clang-profile
	llvm-profdata-8 merge -output=clang.prof clangraw.prof

csharp: test.cs write
	time dotnet run -c Release
