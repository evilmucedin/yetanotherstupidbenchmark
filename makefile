all: cpp csharp

gen: gen.py
	./gen.py >gen.cpp

FLAGS = -Ofast -fomit-frame-pointer -march=native -mtune=native -funroll-loops -Wno-shift-count-overflow -std=c++14

write: write.cpp
	g++ ${FLAGS} -o write write.cpp 
	./write

cpp: test.cpp write gen.cpp cpp-profile gen
	g++ ${FLAGS} -fprofile-use -o test test.cpp
	time ./test

cpp-profile: test.cpp write gen.cpp gen
	rm -f test.gcda
	g++ ${FLAGS} -fprofile-generate -o test-profile test.cpp
	time ./test-profile

cpp-8: test.cpp write gen.cpp cpp-profile-8 gen
	g++-8 ${FLAGS} -fprofile-use -o test-8 test.cpp
	time ./test

cpp-profile-8: test.cpp write gen.cpp gen
	rm -f test.gcda
	g++-8 ${FLAGS} -fprofile-generate -o test-profile-8 test.cpp
	time ./test-profile-8

cpp-clang: test.cpp write gen.cpp cpp-clang-profile
	clang++ ${FLAGS} -fprofile-instr-use=clang.prof -o test-clang test.cpp
	time ./test-clang

cpp-clang-profile: test.cpp write gen.cpp
	clang++ ${FLAGS} -fprofile-instr-generate -o test-clang-profile test.cpp
	LLVM_PROFILE_FILE="clangraw.prof" time ./test-clang-profile
	llvm-profdata merge -output=clang.prof clangraw.prof

cpp-clang-6: test.cpp write gen.cpp cpp-clang-profile-6
	clang++-6.0 ${FLAGS} -fprofile-instr-use=clang.prof -o test-clang-6 test.cpp
	time ./test-clang-6

cpp-clang-profile-6: test.cpp write gen.cpp
	clang++-6.0 ${FLAGS} -fprofile-instr-generate -o test-clang-profile-6 test.cpp
	LLVM_PROFILE_FILE="clangraw.prof" time ./test-clang-profile-6
	llvm-profdata-6.0 merge -output=clang.prof clangraw.prof

csharp: test.cs write
	time dotnet run -c Release

csharp-mono: test.cs write
	mcs test.cs
	mono test.exe

smalltest: smallTest.cpp
	g++ ${FLAGS} -o smallTest smallTest.cpp
	./smallTest
