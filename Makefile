compile: 
	g++ -std=c++11 src/*.cpp -o exec_projet

clean_exec: 
	rm -r exec_projet

clean_test:
	rm -r batterie_test

test_u: 
	g++ test/myTest.cpp src/COO_Object.cpp src/COO_Legacy_Class.cpp -o batterie_test



