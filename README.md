# Galaxian Game

For linux user's being the distributions based in Debian is necessary run this commands to prepare the enviroment:

To install GLUT:

```
apt-get install freeglut3-dev
```

To install GLFW:

```
apt-get install libglfw3-dev
```

To install SDL:

```
apt-get install libsdl1.2-dev libsdl-mixer1.2-dev libsdl-image1.2-dev
```

For more informations about this:

<https://www.prinmath.com/csci5229/misc/install.html>



The code editor is optional but was used vscode editor, to install is very simple, can be these site or prompt:

```
sudo apt update
```
```
sudo apt install snapd
```
```
sudo snap install --classic code
```



In this repository contais a implementatiom of game galaxian using the language C and library opengl.

To compile:

```
gcc -Wall -o runner src/controllers/Runner.c  -lglut -lGLU -lGL -lm
```

To run:

```
./runner
```

