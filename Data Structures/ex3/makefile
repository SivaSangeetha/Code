stackApp.exe: stackApp.o stackImp.o mylib.o
	g++ -o stackApp.exe stackApp.o stackImp.o mylib.o
stackImp.o: stackImp.cpp
	g++ -c stackImp.cpp
stackApp.o:  stackApp.cpp
	g++ -c stackApp.cpp
mylib.o:mylib.cpp
	g++ -c mylib.cpp

