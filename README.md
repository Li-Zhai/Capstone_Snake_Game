# Capstone_Snake_Game

## Dependencies for Running Locally

 - cmake >= 3.7
 - make >= 4.1 (Linux, Mac), 3.81 (Windows)
   - Linux: make is installed by default on most Linux distros
   - Mac: install Xcode command line tools to get make
   - Windows: Click here for installation instructions
 - SDL2 >= 2.0

  >Note that for Linux, an apt or apt-get installation is preferred to building from source.

 - gcc/g++ >= 5.4
   - Linux: gcc / g++ is installed by default on most Linux distros
   - Mac: same deal as make - install Xcode command line tools
   - Windows: recommend using MinGW

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## Rubric Points

1. Compiling and Testing\
   As in the Basic Build Instruction section above, the project code is able to compile and run without any errors.

2. Loops, Functions, I/O\
   The newly added **enum class** make **if-statement** a must in `render.cpp` and `game.cpp`, to adjust operation based on food type.
   The `Renderer::Render()` has been separated into detailed parts as a practice of function implementation.

3. Object Oriented Programming\
   The `food` class is newly added to the starter code to hold its own data to encapsulate the behavior. 
   The `food` class now has **a new private member variable** `state`, see more in the sections below.

4. Memory Management\
   In `render.cpp` and `game.cpp`, the normal food variable with a type of `SDL_Point`, is now switched to a **unique pointer** managing a `food` class object.

5. Concurrency\
   The Rendering of snake and food are pushed into different **threads and run asynchronously**.

## Additional Feature 1

The food is now separated from the game.cpp, I add a new class Food. Now the food has a new aspect: foodState, which is declared in an enum class. Also the food is changed from SDL_Point to a unique pointer, this allows us access the state of the food more efficiently. For now there're three states: 

 - a regular food (displayed in yellow) that increase your score by 1 point.
 - a bonus food (displayed in red) that can give you 2 points instead of 1.
 - a poison (displayed in green) that will decrease your score by 1.

The state of food is randomly generated, the probability of each state to appear is: 10% for bonus food, 10% for poisonous food, and 80% for regular food. After the food is determined, the Game::PlaceFood() method and Game::Update() method both are modified to incorporate the foodState. 

## Additional Feature 2

In the Renderer::Render(), the snake part and the food part are now separated to single functions. And then in the Renderer::Render(), two threads are created to render snake and food separately using std::future and std::asycn.
