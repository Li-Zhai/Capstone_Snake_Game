# Capstone_Snake_Game

## Additional Feature 1
The food is now separated from the game.cpp, I add a new class Food. Now the food has a new aspect: foodState, which is declared in a enum class. For now there're three states: a regular food, a bonus food that can give you 2 points instead of 1, a poison that will decrease your score by 1.

Also the food is changed from SDL_Point to a unique pointer, this allows us access the state of the food more efficiently. 
