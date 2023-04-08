all: compile link

compile:
	g++ -c Game.cpp -IC:\SFML-2.5.1\include -DSFML_STATIC
	g++ -c main.cpp -IC:\SFML-2.5.1\include -DSFML_STATIC



link:
	 g++ Game.o main.o -o main -LC:\SFML-2.5.1\lib -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -lsfml-main

clean:
	rm -f main *.o