main.out:	main.o Persona.h Estudiantes.o Empresa.o
	g++ main.o Persona.h Estudiantes.o Empresa.o -o main.out

main.o: main.cpp Persona.h Estudiantes.h
	g++ -c main.cpp

Estudiantes.o:	Estudiantes.h Estudiantes.cpp
	g++ -c Estudiantes.cpp

Empresa.o:	Empresa.cpp Empresa.h
	g++ -c Empresa.cpp


clean:
	rm *.o main.out