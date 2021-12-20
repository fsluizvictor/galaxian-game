# Galaxian Game

<center>Project developed for the discipline of computer graphics, in CEFET-MG. The idea of ​​the project is based on one of the first games that emerged, which was called Galaxian. In it, the player pilots a spaceship that is at the bottom of the screen and, with it, defends himself from an alien attack. The aliens carry out their attack as a large squad that moves sideways across the top of the screen. The different aliens can drop bombs against the heroic spaceship and, from time to time, they leave the formation and dive individually or in small squadrons in a more aggressive attack against the lone defender, who, in turn, also moves laterally, avoiding the bombs and firing missiles at alien invaders.<center>
 
### Developed by:
- Fabiana Kamo
- Éverton Costa
- Luiz Victor Santos

### Technologies:
- C
- OpenGl
- SOIL
  
### Screenshoots of game

![Captura de tela de 2021-12-20 19-29-26](https://user-images.githubusercontent.com/59936665/146842196-84fe16e1-0516-451f-b681-9c7980c5fc86.png) ![Captura de tela de 2021-12-20 19-29-39](https://user-images.githubusercontent.com/59936665/146842212-026418d2-b459-48ff-ab86-9ba21457a534.png)


![Captura de tela de 2021-12-20 19-29-51](https://user-images.githubusercontent.com/59936665/146842244-90fc97d6-35ed-4c46-a2ac-72f49567a3de.png) ![Captura de tela de 2021-12-20 19-30-21](https://user-images.githubusercontent.com/59936665/146842265-45d3f449-b49d-41fe-8fe3-cb394ee72c6d.png)


![Captura de tela de 2021-12-20 19-31-17](https://user-images.githubusercontent.com/59936665/146842270-e8b850a7-213c-449f-aeb8-143c4f2fcaf9.png)


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
make
```

To run:

```
make run
```


