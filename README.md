# Tetris
Created a simple tetris clone using raylib and c++

Doing this project I learnt:
- [x] C++ Object Oriented Programming
- [x] Creating and using my own CMAKE Template

### BUILD INSTRUCTIONS
Make sure you have CMAKE installed

For Arch
```
yay -S cmake
```

For Deb Based Distributions
```
sudo apt install cmake
```

For Fedora Based Distributions
```
sudo dnf install cmake 
```

For any other linux distributions look up your respective way of installation
For Windows download and install CMAKE from their [website](https://cmake.org/download/)
- - - 
Once CMAKE is installed navigate into the build folder and type ***cmake ..*** once it is done type ***make*** 
then there should be executable file you can run called "Tetris" in the build folder.

If you are on windows you can type ***cmake ..*** into the build folder's path.
Alternatively you can run and make it in your respective IDE.


### GAMEPLAY
UP ARROW KEY - Rotates shape
DOWN ARROW KEY - Moves Shape Down
LEFT ARROW KEY - Moves Shape Left
RIGHT ARROW KEY - Moves Shape Right

Clearing one line = 100 pts 

Clearing two lines = 300 pts

Clearing three lines = 500 pts 

Once you end up hitting the ceiling you will GAME OVER, press any key afterwards to restart.


#### TODO
- [ ] Add Comments

### REFERENCES
I followed along using ![Programming With Nick's](https://www.youtube.com/watch?v=wVYKG_ch4yM&t=1721s) Tetris tutorial

