output: PoligonoTest.o Poligono.o
	g++ PoligonoTest.o Poligono.o -o output

PoligonoTest.o: PoligonoTest.cpp
	g++ -c PoligonoTest.cpp

Poligono.o: Poligono.cpp
	g++ -c Poligono.cpp

clean:
	rm *.o output