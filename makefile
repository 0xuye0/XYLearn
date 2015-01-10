object = MyBiTree.o MyCircleList.o MyLinkList.o MyList.o
main : main.cc $(object)
	g++ -o main main.cc $(object)
MyBiTree :
	g++ -c MyBiTree.cpp
MyCircleList : MyCircleList.h
	g++ -c MyCircleList.cpp
MyLinkList : MyLinkList.h
	g++ -c MyLinklist.cpp
MyList : MyList.h
	g++ -c MyList.cpp
clean :
	rm main $(object)
