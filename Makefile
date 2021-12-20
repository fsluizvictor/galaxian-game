all: src/controllers/Runner.c
	gcc src/controllers/Runner.c  -lGL -lglut -lGLEW -lGLU -lSOIL -lSDL -lSDL_mixer

clean:
	rm -rf *.0 a.out

run: 
	./a.out
